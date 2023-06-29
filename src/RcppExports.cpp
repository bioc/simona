// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// cpp_n_annotations
IntegerVector cpp_n_annotations(S4 dag, bool unify);
RcppExport SEXP _simone_cpp_n_annotations(SEXP dagSEXP, SEXP unifySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< bool >::type unify(unifySEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_n_annotations(dag, unify));
    return rcpp_result_gen;
END_RCPP
}
// cpp_n_annotations_with_intersect
IntegerVector cpp_n_annotations_with_intersect(S4 dag, IntegerVector anno_id);
RcppExport SEXP _simone_cpp_n_annotations_with_intersect(SEXP dagSEXP, SEXP anno_idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type anno_id(anno_idSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_n_annotations_with_intersect(dag, anno_id));
    return rcpp_result_gen;
END_RCPP
}
// cpp_get_term_annotations
IntegerMatrix cpp_get_term_annotations(S4 dag, IntegerVector nodes);
RcppExport SEXP _simone_cpp_get_term_annotations(SEXP dagSEXP, SEXP nodesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nodes(nodesSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_get_term_annotations(dag, nodes));
    return rcpp_result_gen;
END_RCPP
}
// cpp_get_annotated_terms
IntegerMatrix cpp_get_annotated_terms(S4 dag, IntegerVector anno_id);
RcppExport SEXP _simone_cpp_get_annotated_terms(SEXP dagSEXP, SEXP anno_idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type anno_id(anno_idSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_get_annotated_terms(dag, anno_id));
    return rcpp_result_gen;
END_RCPP
}
// cpp_max_ancestor_v
NumericMatrix cpp_max_ancestor_v(S4 dag, IntegerVector nodes, NumericVector v);
RcppExport SEXP _simone_cpp_max_ancestor_v(SEXP dagSEXP, SEXP nodesSEXP, SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nodes(nodesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_max_ancestor_v(dag, nodes, v));
    return rcpp_result_gen;
END_RCPP
}
// cpp_max_ancestor_id
IntegerMatrix cpp_max_ancestor_id(S4 dag, IntegerVector nodes, NumericVector v);
RcppExport SEXP _simone_cpp_max_ancestor_id(SEXP dagSEXP, SEXP nodesSEXP, SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nodes(nodesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_max_ancestor_id(dag, nodes, v));
    return rcpp_result_gen;
END_RCPP
}
// cpp_shortest_distances_via_CA
IntegerMatrix cpp_shortest_distances_via_CA(S4 dag, IntegerVector nodes);
RcppExport SEXP _simone_cpp_shortest_distances_via_CA(SEXP dagSEXP, SEXP nodesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nodes(nodesSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_shortest_distances_via_CA(dag, nodes));
    return rcpp_result_gen;
END_RCPP
}
// cpp_longest_distances_via_LCA
IntegerMatrix cpp_longest_distances_via_LCA(S4 dag, IntegerVector nodes);
RcppExport SEXP _simone_cpp_longest_distances_via_LCA(SEXP dagSEXP, SEXP nodesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nodes(nodesSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_longest_distances_via_LCA(dag, nodes));
    return rcpp_result_gen;
END_RCPP
}
// cpp_longest_distances_from_LCA
List cpp_longest_distances_from_LCA(S4 dag, IntegerVector nodes);
RcppExport SEXP _simone_cpp_longest_distances_from_LCA(SEXP dagSEXP, SEXP nodesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nodes(nodesSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_longest_distances_from_LCA(dag, nodes));
    return rcpp_result_gen;
END_RCPP
}
// cpp_longest_distances_directed
IntegerMatrix cpp_longest_distances_directed(S4 dag, IntegerVector nodes);
RcppExport SEXP _simone_cpp_longest_distances_directed(SEXP dagSEXP, SEXP nodesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nodes(nodesSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_longest_distances_directed(dag, nodes));
    return rcpp_result_gen;
END_RCPP
}
// cpp_shortest_distances_directed
IntegerMatrix cpp_shortest_distances_directed(S4 dag, IntegerVector nodes);
RcppExport SEXP _simone_cpp_shortest_distances_directed(SEXP dagSEXP, SEXP nodesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nodes(nodesSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_shortest_distances_directed(dag, nodes));
    return rcpp_result_gen;
END_RCPP
}
// cpp_nearest_common_ancestor
IntegerMatrix cpp_nearest_common_ancestor(S4 dag, IntegerVector nodes);
RcppExport SEXP _simone_cpp_nearest_common_ancestor(SEXP dagSEXP, SEXP nodesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nodes(nodesSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_nearest_common_ancestor(dag, nodes));
    return rcpp_result_gen;
END_RCPP
}
// cpp_shortest_distances_via_NCA
IntegerMatrix cpp_shortest_distances_via_NCA(S4 dag, IntegerVector nodes);
RcppExport SEXP _simone_cpp_shortest_distances_via_NCA(SEXP dagSEXP, SEXP nodesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nodes(nodesSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_shortest_distances_via_NCA(dag, nodes));
    return rcpp_result_gen;
END_RCPP
}
// cpp_tpl_shortest_path_length
int cpp_tpl_shortest_path_length(S4 dag, int from, int to);
RcppExport SEXP _simone_cpp_tpl_shortest_path_length(SEXP dagSEXP, SEXP fromSEXP, SEXP toSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< int >::type from(fromSEXP);
    Rcpp::traits::input_parameter< int >::type to(toSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_tpl_shortest_path_length(dag, from, to));
    return rcpp_result_gen;
END_RCPP
}
// cpp_tpl_longest_path_length
int cpp_tpl_longest_path_length(S4 dag, int from, int to);
RcppExport SEXP _simone_cpp_tpl_longest_path_length(SEXP dagSEXP, SEXP fromSEXP, SEXP toSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< int >::type from(fromSEXP);
    Rcpp::traits::input_parameter< int >::type to(toSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_tpl_longest_path_length(dag, from, to));
    return rcpp_result_gen;
END_RCPP
}
// cpp_tpl_shortest_path
IntegerVector cpp_tpl_shortest_path(S4 dag, int from, int to);
RcppExport SEXP _simone_cpp_tpl_shortest_path(SEXP dagSEXP, SEXP fromSEXP, SEXP toSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< int >::type from(fromSEXP);
    Rcpp::traits::input_parameter< int >::type to(toSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_tpl_shortest_path(dag, from, to));
    return rcpp_result_gen;
END_RCPP
}
// cpp_tpl_longest_path
IntegerVector cpp_tpl_longest_path(S4 dag, int from, int to);
RcppExport SEXP _simone_cpp_tpl_longest_path(SEXP dagSEXP, SEXP fromSEXP, SEXP toSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< int >::type from(fromSEXP);
    Rcpp::traits::input_parameter< int >::type to(toSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_tpl_longest_path(dag, from, to));
    return rcpp_result_gen;
END_RCPP
}
// cpp_term_pos_on_circle
DataFrame cpp_term_pos_on_circle(S4 dag, double start, double end);
RcppExport SEXP _simone_cpp_term_pos_on_circle(SEXP dagSEXP, SEXP startSEXP, SEXP endSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< double >::type start(startSEXP);
    Rcpp::traits::input_parameter< double >::type end(endSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_term_pos_on_circle(dag, start, end));
    return rcpp_result_gen;
END_RCPP
}
// cpp_sim_aic
NumericMatrix cpp_sim_aic(S4 dag, IntegerVector nodes, NumericVector ic);
RcppExport SEXP _simone_cpp_sim_aic(SEXP dagSEXP, SEXP nodesSEXP, SEXP icSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nodes(nodesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ic(icSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_sim_aic(dag, nodes, ic));
    return rcpp_result_gen;
END_RCPP
}
// cpp_sim_wang
NumericVector cpp_sim_wang(S4 dag, IntegerVector nodes, NumericVector contribution);
RcppExport SEXP _simone_cpp_sim_wang(SEXP dagSEXP, SEXP nodesSEXP, SEXP contributionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nodes(nodesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type contribution(contributionSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_sim_wang(dag, nodes, contribution));
    return rcpp_result_gen;
END_RCPP
}
// cpp_wang_sv_to_sim
NumericMatrix cpp_wang_sv_to_sim(NumericMatrix sv);
RcppExport SEXP _simone_cpp_wang_sv_to_sim(SEXP svSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type sv(svSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_wang_sv_to_sim(sv));
    return rcpp_result_gen;
END_RCPP
}
// cpp_sim_wang_edge
NumericMatrix cpp_sim_wang_edge(S4 dag, IntegerVector nodes);
RcppExport SEXP _simone_cpp_sim_wang_edge(SEXP dagSEXP, SEXP nodesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nodes(nodesSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_sim_wang_edge(dag, nodes));
    return rcpp_result_gen;
END_RCPP
}
// cpp_sim_zhong
NumericMatrix cpp_sim_zhong(S4 dag, IntegerVector nodes, bool depth_via_LCA);
RcppExport SEXP _simone_cpp_sim_zhong(SEXP dagSEXP, SEXP nodesSEXP, SEXP depth_via_LCASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nodes(nodesSEXP);
    Rcpp::traits::input_parameter< bool >::type depth_via_LCA(depth_via_LCASEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_sim_zhong(dag, nodes, depth_via_LCA));
    return rcpp_result_gen;
END_RCPP
}
// cpp_sim_shen
NumericMatrix cpp_sim_shen(S4 dag, IntegerVector nodes, NumericVector ic);
RcppExport SEXP _simone_cpp_sim_shen(SEXP dagSEXP, SEXP nodesSEXP, SEXP icSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nodes(nodesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ic(icSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_sim_shen(dag, nodes, ic));
    return rcpp_result_gen;
END_RCPP
}
// cpp_sim_SSDD
NumericMatrix cpp_sim_SSDD(S4 dag, IntegerVector nodes, NumericVector t);
RcppExport SEXP _simone_cpp_sim_SSDD(SEXP dagSEXP, SEXP nodesSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nodes(nodesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_sim_SSDD(dag, nodes, t));
    return rcpp_result_gen;
END_RCPP
}
// cpp_common_ancestor_mean_IC_XGraSM
NumericMatrix cpp_common_ancestor_mean_IC_XGraSM(S4 dag, IntegerVector nodes, NumericVector ic);
RcppExport SEXP _simone_cpp_common_ancestor_mean_IC_XGraSM(SEXP dagSEXP, SEXP nodesSEXP, SEXP icSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nodes(nodesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ic(icSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_common_ancestor_mean_IC_XGraSM(dag, nodes, ic));
    return rcpp_result_gen;
END_RCPP
}
// cpp_common_ancestor_mean_IC_EISI
NumericMatrix cpp_common_ancestor_mean_IC_EISI(S4 dag, IntegerVector nodes, NumericVector ic);
RcppExport SEXP _simone_cpp_common_ancestor_mean_IC_EISI(SEXP dagSEXP, SEXP nodesSEXP, SEXP icSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nodes(nodesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ic(icSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_common_ancestor_mean_IC_EISI(dag, nodes, ic));
    return rcpp_result_gen;
END_RCPP
}
// cpp_common_ancestor_mean_IC_GraSM
NumericMatrix cpp_common_ancestor_mean_IC_GraSM(S4 dag, IntegerVector nodes, NumericVector ic);
RcppExport SEXP _simone_cpp_common_ancestor_mean_IC_GraSM(SEXP dagSEXP, SEXP nodesSEXP, SEXP icSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nodes(nodesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ic(icSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_common_ancestor_mean_IC_GraSM(dag, nodes, ic));
    return rcpp_result_gen;
END_RCPP
}
// cpp_ic_meng
NumericVector cpp_ic_meng(S4 dag, bool correct);
RcppExport SEXP _simone_cpp_ic_meng(SEXP dagSEXP, SEXP correctSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< bool >::type correct(correctSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_ic_meng(dag, correct));
    return rcpp_result_gen;
END_RCPP
}
// cpp_ic_wang
NumericVector cpp_ic_wang(S4 dag, NumericVector contribution);
RcppExport SEXP _simone_cpp_ic_wang(SEXP dagSEXP, SEXP contributionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type contribution(contributionSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_ic_wang(dag, contribution));
    return rcpp_result_gen;
END_RCPP
}
// cpp_max_leaves_id
IntegerVector cpp_max_leaves_id(S4 dag, IntegerVector nodes, NumericVector v);
RcppExport SEXP _simone_cpp_max_leaves_id(SEXP dagSEXP, SEXP nodesSEXP, SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nodes(nodesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_max_leaves_id(dag, nodes, v));
    return rcpp_result_gen;
END_RCPP
}
// cpp_ancestors
IntegerVector cpp_ancestors(S4 dag, int node, bool include_self);
RcppExport SEXP _simone_cpp_ancestors(SEXP dagSEXP, SEXP nodeSEXP, SEXP include_selfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< int >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< bool >::type include_self(include_selfSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_ancestors(dag, node, include_self));
    return rcpp_result_gen;
END_RCPP
}
// cpp_ancestors_within_background
IntegerVector cpp_ancestors_within_background(S4 dag, int node, IntegerVector background, bool include_self);
RcppExport SEXP _simone_cpp_ancestors_within_background(SEXP dagSEXP, SEXP nodeSEXP, SEXP backgroundSEXP, SEXP include_selfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< int >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type background(backgroundSEXP);
    Rcpp::traits::input_parameter< bool >::type include_self(include_selfSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_ancestors_within_background(dag, node, background, include_self));
    return rcpp_result_gen;
END_RCPP
}
// cpp_offspring
IntegerVector cpp_offspring(S4 dag, int node, bool include_self);
RcppExport SEXP _simone_cpp_offspring(SEXP dagSEXP, SEXP nodeSEXP, SEXP include_selfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< int >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< bool >::type include_self(include_selfSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_offspring(dag, node, include_self));
    return rcpp_result_gen;
END_RCPP
}
// cpp_all_offspring
LogicalMatrix cpp_all_offspring(S4 dag, bool include_self);
RcppExport SEXP _simone_cpp_all_offspring(SEXP dagSEXP, SEXP include_selfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< bool >::type include_self(include_selfSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_all_offspring(dag, include_self));
    return rcpp_result_gen;
END_RCPP
}
// cpp_offspring_within_background
IntegerVector cpp_offspring_within_background(S4 dag, int node, IntegerVector background, bool include_self);
RcppExport SEXP _simone_cpp_offspring_within_background(SEXP dagSEXP, SEXP nodeSEXP, SEXP backgroundSEXP, SEXP include_selfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< int >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type background(backgroundSEXP);
    Rcpp::traits::input_parameter< bool >::type include_self(include_selfSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_offspring_within_background(dag, node, background, include_self));
    return rcpp_result_gen;
END_RCPP
}
// cpp_connected_leaves
IntegerVector cpp_connected_leaves(S4 dag, int node);
RcppExport SEXP _simone_cpp_connected_leaves(SEXP dagSEXP, SEXP nodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< int >::type node(nodeSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_connected_leaves(dag, node));
    return rcpp_result_gen;
END_RCPP
}
// cpp_n_ancestors
IntegerVector cpp_n_ancestors(S4 dag, bool include_self);
RcppExport SEXP _simone_cpp_n_ancestors(SEXP dagSEXP, SEXP include_selfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< bool >::type include_self(include_selfSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_n_ancestors(dag, include_self));
    return rcpp_result_gen;
END_RCPP
}
// cpp_n_offspring
IntegerVector cpp_n_offspring(S4 dag, bool include_self);
RcppExport SEXP _simone_cpp_n_offspring(SEXP dagSEXP, SEXP include_selfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< bool >::type include_self(include_selfSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_n_offspring(dag, include_self));
    return rcpp_result_gen;
END_RCPP
}
// cpp_n_offspring_with_intersect
IntegerVector cpp_n_offspring_with_intersect(S4 dag, IntegerVector nodes, bool include_self);
RcppExport SEXP _simone_cpp_n_offspring_with_intersect(SEXP dagSEXP, SEXP nodesSEXP, SEXP include_selfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nodes(nodesSEXP);
    Rcpp::traits::input_parameter< bool >::type include_self(include_selfSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_n_offspring_with_intersect(dag, nodes, include_self));
    return rcpp_result_gen;
END_RCPP
}
// cpp_n_leaves
IntegerVector cpp_n_leaves(S4 dag);
RcppExport SEXP _simone_cpp_n_leaves(SEXP dagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_n_leaves(dag));
    return rcpp_result_gen;
END_RCPP
}
// cpp_ancestors_of_a_group
IntegerVector cpp_ancestors_of_a_group(S4 dag, IntegerVector nodes, int type, bool include_self);
RcppExport SEXP _simone_cpp_ancestors_of_a_group(SEXP dagSEXP, SEXP nodesSEXP, SEXP typeSEXP, SEXP include_selfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nodes(nodesSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    Rcpp::traits::input_parameter< bool >::type include_self(include_selfSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_ancestors_of_a_group(dag, nodes, type, include_self));
    return rcpp_result_gen;
END_RCPP
}
// cpp_ancestors_of_two_groups
IntegerVector cpp_ancestors_of_two_groups(S4 dag, IntegerVector nodes1, IntegerVector nodes2, int type, bool include_self);
RcppExport SEXP _simone_cpp_ancestors_of_two_groups(SEXP dagSEXP, SEXP nodes1SEXP, SEXP nodes2SEXP, SEXP typeSEXP, SEXP include_selfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nodes1(nodes1SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nodes2(nodes2SEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    Rcpp::traits::input_parameter< bool >::type include_self(include_selfSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_ancestors_of_two_groups(dag, nodes1, nodes2, type, include_self));
    return rcpp_result_gen;
END_RCPP
}
// cpp_offspring_of_a_group
IntegerVector cpp_offspring_of_a_group(S4 dag, IntegerVector nodes, bool include_self);
RcppExport SEXP _simone_cpp_offspring_of_a_group(SEXP dagSEXP, SEXP nodesSEXP, SEXP include_selfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nodes(nodesSEXP);
    Rcpp::traits::input_parameter< bool >::type include_self(include_selfSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_offspring_of_a_group(dag, nodes, include_self));
    return rcpp_result_gen;
END_RCPP
}
// cpp_is_reachable
LogicalMatrix cpp_is_reachable(S4 dag, IntegerVector nodes, bool directed);
RcppExport SEXP _simone_cpp_is_reachable(SEXP dagSEXP, SEXP nodesSEXP, SEXP directedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nodes(nodesSEXP);
    Rcpp::traits::input_parameter< bool >::type directed(directedSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_is_reachable(dag, nodes, directed));
    return rcpp_result_gen;
END_RCPP
}
// cpp_dag_depth
IntegerVector cpp_dag_depth(S4 dag);
RcppExport SEXP _simone_cpp_dag_depth(SEXP dagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_dag_depth(dag));
    return rcpp_result_gen;
END_RCPP
}
// cpp_dag_dist_from_root
IntegerVector cpp_dag_dist_from_root(S4 dag);
RcppExport SEXP _simone_cpp_dag_dist_from_root(SEXP dagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_dag_dist_from_root(dag));
    return rcpp_result_gen;
END_RCPP
}
// cpp_dag_longest_dist_to_offspring
IntegerVector cpp_dag_longest_dist_to_offspring(S4 dag, IntegerVector from_node, LogicalVector l_background);
RcppExport SEXP _simone_cpp_dag_longest_dist_to_offspring(SEXP dagSEXP, SEXP from_nodeSEXP, SEXP l_backgroundSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type from_node(from_nodeSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type l_background(l_backgroundSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_dag_longest_dist_to_offspring(dag, from_node, l_background));
    return rcpp_result_gen;
END_RCPP
}
// cpp_dag_shortest_dist_to_offspring
IntegerVector cpp_dag_shortest_dist_to_offspring(S4 dag, IntegerVector from_node, LogicalVector l_background);
RcppExport SEXP _simone_cpp_dag_shortest_dist_to_offspring(SEXP dagSEXP, SEXP from_nodeSEXP, SEXP l_backgroundSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type from_node(from_nodeSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type l_background(l_backgroundSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_dag_shortest_dist_to_offspring(dag, from_node, l_background));
    return rcpp_result_gen;
END_RCPP
}
// cpp_dag_height
IntegerVector cpp_dag_height(S4 dag);
RcppExport SEXP _simone_cpp_dag_height(SEXP dagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_dag_height(dag));
    return rcpp_result_gen;
END_RCPP
}
// cpp_dag_dist_to_leaves
IntegerVector cpp_dag_dist_to_leaves(S4 dag);
RcppExport SEXP _simone_cpp_dag_dist_to_leaves(SEXP dagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_dag_dist_to_leaves(dag));
    return rcpp_result_gen;
END_RCPP
}
// cpp_dag_longest_dist_from_ancestors
IntegerVector cpp_dag_longest_dist_from_ancestors(S4 dag, IntegerVector to_node, LogicalVector l_background);
RcppExport SEXP _simone_cpp_dag_longest_dist_from_ancestors(SEXP dagSEXP, SEXP to_nodeSEXP, SEXP l_backgroundSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type to_node(to_nodeSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type l_background(l_backgroundSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_dag_longest_dist_from_ancestors(dag, to_node, l_background));
    return rcpp_result_gen;
END_RCPP
}
// cpp_dag_shortest_dist_from_ancestors
IntegerVector cpp_dag_shortest_dist_from_ancestors(S4 dag, IntegerVector to_node, LogicalVector l_background);
RcppExport SEXP _simone_cpp_dag_shortest_dist_from_ancestors(SEXP dagSEXP, SEXP to_nodeSEXP, SEXP l_backgroundSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type to_node(to_nodeSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type l_background(l_backgroundSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_dag_shortest_dist_from_ancestors(dag, to_node, l_background));
    return rcpp_result_gen;
END_RCPP
}
// cpp_check_cyclic_node
void cpp_check_cyclic_node(S4 dag);
RcppExport SEXP _simone_cpp_check_cyclic_node(SEXP dagSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type dag(dagSEXP);
    cpp_check_cyclic_node(dag);
    return R_NilValue;
END_RCPP
}
// cpp_match_index
IntegerVector cpp_match_index(IntegerVector ind1, IntegerVector ind2);
RcppExport SEXP _simone_cpp_match_index(SEXP ind1SEXP, SEXP ind2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type ind1(ind1SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type ind2(ind2SEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_match_index(ind1, ind2));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_simone_cpp_n_annotations", (DL_FUNC) &_simone_cpp_n_annotations, 2},
    {"_simone_cpp_n_annotations_with_intersect", (DL_FUNC) &_simone_cpp_n_annotations_with_intersect, 2},
    {"_simone_cpp_get_term_annotations", (DL_FUNC) &_simone_cpp_get_term_annotations, 2},
    {"_simone_cpp_get_annotated_terms", (DL_FUNC) &_simone_cpp_get_annotated_terms, 2},
    {"_simone_cpp_max_ancestor_v", (DL_FUNC) &_simone_cpp_max_ancestor_v, 3},
    {"_simone_cpp_max_ancestor_id", (DL_FUNC) &_simone_cpp_max_ancestor_id, 3},
    {"_simone_cpp_shortest_distances_via_CA", (DL_FUNC) &_simone_cpp_shortest_distances_via_CA, 2},
    {"_simone_cpp_longest_distances_via_LCA", (DL_FUNC) &_simone_cpp_longest_distances_via_LCA, 2},
    {"_simone_cpp_longest_distances_from_LCA", (DL_FUNC) &_simone_cpp_longest_distances_from_LCA, 2},
    {"_simone_cpp_longest_distances_directed", (DL_FUNC) &_simone_cpp_longest_distances_directed, 2},
    {"_simone_cpp_shortest_distances_directed", (DL_FUNC) &_simone_cpp_shortest_distances_directed, 2},
    {"_simone_cpp_nearest_common_ancestor", (DL_FUNC) &_simone_cpp_nearest_common_ancestor, 2},
    {"_simone_cpp_shortest_distances_via_NCA", (DL_FUNC) &_simone_cpp_shortest_distances_via_NCA, 2},
    {"_simone_cpp_tpl_shortest_path_length", (DL_FUNC) &_simone_cpp_tpl_shortest_path_length, 3},
    {"_simone_cpp_tpl_longest_path_length", (DL_FUNC) &_simone_cpp_tpl_longest_path_length, 3},
    {"_simone_cpp_tpl_shortest_path", (DL_FUNC) &_simone_cpp_tpl_shortest_path, 3},
    {"_simone_cpp_tpl_longest_path", (DL_FUNC) &_simone_cpp_tpl_longest_path, 3},
    {"_simone_cpp_term_pos_on_circle", (DL_FUNC) &_simone_cpp_term_pos_on_circle, 3},
    {"_simone_cpp_sim_aic", (DL_FUNC) &_simone_cpp_sim_aic, 3},
    {"_simone_cpp_sim_wang", (DL_FUNC) &_simone_cpp_sim_wang, 3},
    {"_simone_cpp_wang_sv_to_sim", (DL_FUNC) &_simone_cpp_wang_sv_to_sim, 1},
    {"_simone_cpp_sim_wang_edge", (DL_FUNC) &_simone_cpp_sim_wang_edge, 2},
    {"_simone_cpp_sim_zhong", (DL_FUNC) &_simone_cpp_sim_zhong, 3},
    {"_simone_cpp_sim_shen", (DL_FUNC) &_simone_cpp_sim_shen, 3},
    {"_simone_cpp_sim_SSDD", (DL_FUNC) &_simone_cpp_sim_SSDD, 3},
    {"_simone_cpp_common_ancestor_mean_IC_XGraSM", (DL_FUNC) &_simone_cpp_common_ancestor_mean_IC_XGraSM, 3},
    {"_simone_cpp_common_ancestor_mean_IC_EISI", (DL_FUNC) &_simone_cpp_common_ancestor_mean_IC_EISI, 3},
    {"_simone_cpp_common_ancestor_mean_IC_GraSM", (DL_FUNC) &_simone_cpp_common_ancestor_mean_IC_GraSM, 3},
    {"_simone_cpp_ic_meng", (DL_FUNC) &_simone_cpp_ic_meng, 2},
    {"_simone_cpp_ic_wang", (DL_FUNC) &_simone_cpp_ic_wang, 2},
    {"_simone_cpp_max_leaves_id", (DL_FUNC) &_simone_cpp_max_leaves_id, 3},
    {"_simone_cpp_ancestors", (DL_FUNC) &_simone_cpp_ancestors, 3},
    {"_simone_cpp_ancestors_within_background", (DL_FUNC) &_simone_cpp_ancestors_within_background, 4},
    {"_simone_cpp_offspring", (DL_FUNC) &_simone_cpp_offspring, 3},
    {"_simone_cpp_all_offspring", (DL_FUNC) &_simone_cpp_all_offspring, 2},
    {"_simone_cpp_offspring_within_background", (DL_FUNC) &_simone_cpp_offspring_within_background, 4},
    {"_simone_cpp_connected_leaves", (DL_FUNC) &_simone_cpp_connected_leaves, 2},
    {"_simone_cpp_n_ancestors", (DL_FUNC) &_simone_cpp_n_ancestors, 2},
    {"_simone_cpp_n_offspring", (DL_FUNC) &_simone_cpp_n_offspring, 2},
    {"_simone_cpp_n_offspring_with_intersect", (DL_FUNC) &_simone_cpp_n_offspring_with_intersect, 3},
    {"_simone_cpp_n_leaves", (DL_FUNC) &_simone_cpp_n_leaves, 1},
    {"_simone_cpp_ancestors_of_a_group", (DL_FUNC) &_simone_cpp_ancestors_of_a_group, 4},
    {"_simone_cpp_ancestors_of_two_groups", (DL_FUNC) &_simone_cpp_ancestors_of_two_groups, 5},
    {"_simone_cpp_offspring_of_a_group", (DL_FUNC) &_simone_cpp_offspring_of_a_group, 3},
    {"_simone_cpp_is_reachable", (DL_FUNC) &_simone_cpp_is_reachable, 3},
    {"_simone_cpp_dag_depth", (DL_FUNC) &_simone_cpp_dag_depth, 1},
    {"_simone_cpp_dag_dist_from_root", (DL_FUNC) &_simone_cpp_dag_dist_from_root, 1},
    {"_simone_cpp_dag_longest_dist_to_offspring", (DL_FUNC) &_simone_cpp_dag_longest_dist_to_offspring, 3},
    {"_simone_cpp_dag_shortest_dist_to_offspring", (DL_FUNC) &_simone_cpp_dag_shortest_dist_to_offspring, 3},
    {"_simone_cpp_dag_height", (DL_FUNC) &_simone_cpp_dag_height, 1},
    {"_simone_cpp_dag_dist_to_leaves", (DL_FUNC) &_simone_cpp_dag_dist_to_leaves, 1},
    {"_simone_cpp_dag_longest_dist_from_ancestors", (DL_FUNC) &_simone_cpp_dag_longest_dist_from_ancestors, 3},
    {"_simone_cpp_dag_shortest_dist_from_ancestors", (DL_FUNC) &_simone_cpp_dag_shortest_dist_from_ancestors, 3},
    {"_simone_cpp_check_cyclic_node", (DL_FUNC) &_simone_cpp_check_cyclic_node, 1},
    {"_simone_cpp_match_index", (DL_FUNC) &_simone_cpp_match_index, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_simone(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
