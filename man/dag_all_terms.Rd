% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/constructor.R
\name{dag_all_terms}
\alias{dag_all_terms}
\alias{dag_n_terms}
\alias{dag_n_relations}
\alias{dag_n_leaves}
\title{Names of all terms}
\usage{
dag_all_terms(dag)

dag_n_terms(dag)

dag_n_relations(dag)

dag_n_leaves(dag)
}
\arguments{
\item{dag}{An \code{ontology_DAG} object.}
}
\value{
\code{dag_all_terms()} returns a vector of term names. \code{dag_n_terms()} returns
a single iteger.
}
\description{
Names of all terms
}
\examples{
parents  = c("a", "a", "b", "b", "c", "d")
children = c("b", "c", "c", "d", "e", "f")
dag = create_ontology_DAG(parents, children)
dag_all_terms(dag)
dag_n_terms(dag)
}
