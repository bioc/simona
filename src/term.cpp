#include <Rcpp.h>
using namespace Rcpp;

#include "traverse.h"
#include "utils.h"


// [[Rcpp::export]]
NumericVector cpp_ic_meng(S4 dag, bool correct) {
	List lt_children = dag.slot("lt_children");
	IntegerVector depth = _dag_depth(dag);
	int n_terms = dag.slot("n_terms");

	int max_depth = max(depth);
	int n = lt_children.size();

	NumericVector ic(n);
	for(int i = 0; i < n; i ++) {
		if(depth[i] == 0 || (!correct && depth[i] == 1)) {
			ic[i] = 0;
		} else {
			LogicalVector l_offspring(n);
			_find_offspring(lt_children, i, l_offspring);

			double x = 0.0;
			for(int j = 0; j < n; j ++) {
				if(l_offspring[j]) {
					x = x + 1.0/depth[j];
				}
			}

			if(correct) {
				ic[i] = log(depth[i]+1)/log(max_depth+1)*(1 - log(x + 1)/log(n_terms));
			} else {
				ic[i] = log(depth[i])/log(max_depth)*(1 - log(x + 1)/log(n_terms));
			}
		}
	}

	return ic;
}


// it calculates S_a(t)
double _calc_wang_s(List lt_children, List lt_children_relations, NumericVector contribution,
	int i_node, int i_end, LogicalVector l_background, bool correct = false, double c = 0.66667) {

	if(i_node == i_end) {
		return 1;
	} else {
		IntegerVector children = lt_children[i_node];
		IntegerVector relations = lt_children_relations[i_node];
		LogicalVector l_children_included(children.size(), false);

		for(int i = 0; i < children.size(); i ++) {
			if(l_background[ children[i] - 1 ]) {
				l_children_included[i] = true;
			} 
		}

		NumericVector s(sum(l_children_included), 0);
		int nc = sum(l_children_included);
		int si = 0;
		for(int i = 0; i < children.size(); i ++) {
			if(l_children_included[i]) {
				if(correct) {
					s[si] = _calc_wang_s(lt_children, lt_children_relations, contribution,
					                     children[i] - 1, i_end, l_background, correct, c) * (1/(c+nc) + contribution[relations[i] - 1]);
				} else {
					s[si] = _calc_wang_s(lt_children, lt_children_relations, contribution,
					                     children[i] - 1, i_end, l_background, correct, c) * contribution[relations[i] - 1];
				}
				si ++;
			}
			
		}
		return max(s);
	}
}

// [[Rcpp::export]]
NumericVector cpp_ic_wang(S4 dag, NumericVector contribution) {

	List lt_parents = dag.slot("lt_parents");
	List lt_children = dag.slot("lt_children");
	List lt_children_relations = dag.slot("lt_children_relations");

	int n = lt_parents.size();
	NumericVector ic(n);

	for(int i = 0; i < n; i ++) {

		if(i % 1000 == 0) {
			message("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b", false);
			message("going through " + std::to_string(i) + " / " + std::to_string(n) + " nodes ...", false);
		}

		LogicalVector l_ancestors(n);
		_find_ancestors(lt_parents, i, l_ancestors, true);

		for(int j = 0; j < n; j ++) {
			if(l_ancestors[j]) {
				ic[i] += _calc_wang_s(lt_children, lt_children_relations, contribution, j, i, l_ancestors);
			}
		}
		
		reset_logical_vector_to_false(l_ancestors);
	}

	message("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b", false);
	message("going through " + std::to_string(n) + " / " + std::to_string(n) + " nodes ... Done.", true);

	return ic;
}




// a leaf's most informative leaf is itself
// [[Rcpp::export]]
IntegerVector cpp_max_leaves_id(S4 dag, IntegerVector nodes, NumericVector v) {
	
	List lt_children = dag.slot("lt_children");
	int n = lt_children.size();

	int m = nodes.size();
	IntegerVector cl(m);
	LogicalVector is_leaf(n);
	for(int i = 0; i < m; i ++) {
		cl[i] = nodes[i];
		_find_connected_leaves(lt_children, nodes[i]-1, is_leaf);

		double max_v = 0;
		for(int j = 0; j < n; j ++) {
			if(is_leaf[j]) {
				if(v[j] > max_v) {
					max_v = v[j];
					cl[i] = j+1;
				}
			}
		}

		reset_logical_vector_to_false(is_leaf);
	}

	return cl;
}

