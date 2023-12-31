
library(testthat)


## export all functions
if(!identical(topenv(), .GlobalEnv)) {
	pkg_env = asNamespace("simona")
	all_objs = ls(envir = pkg_env)
	for(obj in all_objs) {
		assign(obj, get(obj, envir = pkg_env, inherits = FALSE))
	}
}

#### test a small dag

#   b--d--f
#  / \
# a---c--e
# upstream -> downstream

parents  = c("a", "a", "b", "b", "c", "d")
children = c("b", "c", "c", "d", "e", "f")

dag = create_ontology_DAG(parents, children)

test_that("test cpp_max_ancestor_v", {
	m = max_ancestor_v(dag, 1:6, dag_depth(dag))
	expect_equal(
		m[upper.tri(m, diag = TRUE)],
		c(0, 0, 1, 0, 1, 2, 0, 1, 1, 2, 0, 1, 2, 1, 3, 0, 1, 1, 2, 1, 3)
	)

	m = max_ancestor_v(dag, c(2, 4, 5, 3), dag_depth(dag))
	expect_equal(
		m[upper.tri(m, diag = TRUE)],
		c(1, 1, 2, 1, 1, 3, 1, 1, 2, 2)
	)
})

test_that("test cpp_max_ancestor_id", {
	m = max_ancestor_id(dag, 1:6, dag_depth(dag))
	expect_equal(
		m[upper.tri(m, diag = TRUE)],
		c(1, 1, 2, 1, 2, 3, 1, 2, 2, 4, 1, 2, 3, 2, 5, 1, 2, 2, 4, 2, 6)
	)

	m = max_ancestor_id(dag, c(2, 4, 5, 3), dag_depth(dag))
	expect_equal(
		m[upper.tri(m, diag = TRUE)],
		c(2, 2,4, 2, 2, 5, 2, 2, 3, 3)
	)

	m = max_ancestor_id(dag, 1:6, rep(0, 6))
	expect_equal(
		m[upper.tri(m, diag = TRUE)],
		c(1, 1, 2, 1, 2, 3, 1, 2, 2, 4, 1, 2, 3, 2, 5, 1, 2, 2, 4, 2, 6)
	)

})

test_that("test cpp_distances", {
	m = shortest_distances_via_NCA(dag, 1:6)
	expect_equal(
		m[upper.tri(m, diag = TRUE)],
		c(0, 1, 0, 1, 1, 0, 2, 1, 2, 0, 2, 2, 1, 3, 0, 3, 2, 3, 1, 4, 0)
	)

	m2 = shortest_distances_via_NCA(dag, c(2, 4, 5, 3))
	m3 = m[c(2, 4, 5, 3), c(2, 4, 5, 3)]
	expect_equal(m2, m3)

	m = longest_distances_via_LCA(dag, 1:6)
	expect_equal(
		m[upper.tri(m, diag = TRUE)],
		c(0, 1, 0, 2, 1, 0, 2, 1, 2, 0, 3, 2, 1, 3, 0, 3, 2, 3, 1, 4, 0)
	)

	m2 = longest_distances_via_LCA(dag, c(2, 4, 5, 3))
	m3 = m[c(2, 4, 5, 3), c(2, 4, 5, 3)]
	expect_equal(m2, m3)

	lt = cpp_longest_distances_from_LCA(dag, 1:6)
	m = longest_distances_via_LCA(dag, 1:6)
	dimnames(m) = NULL

	expect_equal(m, lt$left + lt$right)
})

test_that("test distance_directed", {
	m = longest_distances_directed(dag, 1:6)
	expect_equal(
		m[upper.tri(m, diag = TRUE)],
		c(0, 1, 0, 2, 1, 0, 2, 1, -1, 0, 3, 2, 1, -1, 0, 3, 2, -1, 1, -1, 0)
	)

	m2 = longest_distances_directed(dag, c(2, 4, 5, 3))
	m3 = m[c(2, 4, 5, 3), c(2, 4, 5, 3)]
	expect_equal(m2, m3)

	expect_equal(
		m[lower.tri(m, diag = FALSE)],
		rep(-1, 15)
	)

	m = shortest_distances_directed(dag, 1:6)
	expect_equal(
		m[upper.tri(m, diag = TRUE)],
		c(0, 1, 0, 1, 1, 0, 2, 1, -1, 0, 2, 2, 1, -1, 0, 3, 2, -1, 1, -1, 0)
	)

	m2 = shortest_distances_directed(dag, c(2, 4, 5, 3))
	m3 = m[c(2, 4, 5, 3), c(2, 4, 5, 3)]
	expect_equal(m2, m3)

	expect_equal(
		m[lower.tri(m, diag = FALSE)],
		rep(-1, 15)
	)
})


test_that("test cpp_nearest_common_ancestor", {
	m = cpp_nearest_common_ancestor(dag, 1:6)
	expect_equal(
		m[upper.tri(m, diag = TRUE)],
		c(1, 1, 2, 1, 2, 3, 1, 2, 2, 4, 1, 2, 3, 2, 5, 1, 2, 2, 4, 2, 6)
	)

	m2 = cpp_nearest_common_ancestor(dag, c(2, 4, 5, 3))
	m3 = m[c(2, 4, 5, 3), c(2, 4, 5, 3)]
	expect_equal(m2, m3)
})


test_that("compare cpp_nearest_common_ancestor and cpp_max_ancestor_v", {
	parents = c("a", "b", "c", "c", "d", "f", "b", "b")
	children = c("b", "c", "d", "f", "e", "g", "e", "g")
	dag = create_ontology_DAG(parents, children)
	depth = dag_depth(dag)

	m1 = max_ancestor_id(dag, 1:7, depth)
	m2 = cpp_nearest_common_ancestor(dag, 1:7)

	expect_equal(m1[5, 7], 3)
	expect_equal(m2[5, 7], 2)

	expect_equal(m1[4, 6], 3)
	expect_equal(m2[4, 6], 3)
})



if(FALSE) {

dag = create_ontology_DAG_from_GO_db()

system.time(d <- LCA_term(dag, dag@terms)); rm(d); gc();
system.time(d <- LCA_depth(dag, dag@terms)); rm(d); gc();
system.time(d <- NCA_term(dag, dag@terms)); rm(d); gc();
system.time(d <- MICA_term(dag, dag@terms, "IC_universal")); rm(d); gc();
system.time(d <- MICA_IC(dag, dag@terms, "IC_universal")); rm(d); gc();

}

