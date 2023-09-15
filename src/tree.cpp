#include <Rcpp.h>
using namespace Rcpp;

#include "utils.h"
#include "transverse.h"

// [[Rcpp::export]]
List cpp_mark_tree_links(S4 dag) {
	List lt_children = dag.slot("lt_children");
	IntegerVector depth = _dag_depth(dag);
	int n = lt_children.size();

	List lt_children2 = clone(lt_children);

	int current_depth = 0;
	IntegerVector current = dag.slot("root");
	LogicalVector l_current = integer_to_logical_vector(current-1, n);

	LogicalVector l_visited(n);
	l_visited[current[0]-1] = true;
	int i_visited = 1;

	while(i_visited < n) {
		
		current_depth ++;
		LogicalVector l_current2(n);
		for(int i = 0; i < n; i ++) {
			if(l_current[i]) {
				IntegerVector children = lt_children[i];
				IntegerVector children2 = lt_children2[i];

				if(children.size()) {
					for(int j = 0; j < children.size(); j ++) {
						if(depth[children[j]-1] == current_depth && !l_visited[children[j]-1]) {
							l_visited[children[j]-1] = true;
							l_current2[children[j]-1] = true;

							children2[j] = - children2[j];

							i_visited ++;
							if(i_visited % 1000 == 0) {
								message("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b", false);
								message("going through " + std::to_string(i_visited) + " / " + std::to_string(n) + " nodes ...", false);
							}
						}
					}
				}
			}
		}

		l_current = l_current2;
	}

	message("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b", false);
	message("going through " + std::to_string(n) + " / " + std::to_string(n) + " nodes ... Done.", true);

	return lt_children2;
}
