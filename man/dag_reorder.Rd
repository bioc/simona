% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/reorder.R
\name{dag_reorder}
\alias{dag_reorder}
\title{Reorder child terms}
\usage{
dag_reorder(dag, max_level = 2)
}
\arguments{
\item{dag}{An \code{ontology_Dag} object.}

\item{max_level}{Maximal depth of terms in DAG to apply reordering. The value
should be set to a small integer because normally the effect of reordering
too deep in the DAG is not noticable.}
}
\value{
An \code{ontology_Dag} object.
}
\description{
Reorder child terms
}
\details{
For a given term, its child terms are reordered based on the numbers
of cross-links of their offspring terms.

Denote c1 and c2 are two child terms, S1 and S2 are two sets of offspring terms of c1 and c2.
We calculate k as the number of links between S1 and S2, which are the links linking parents in S1
and children in S2, or parents in S2 and children in S1. Denote n as the total number of links
in the DAG, n - k is the distance bewteen c1 and c2 regarding how close the offspring sub-trees are connected.

With the distances from the set of child terms, \code{\link[TSP:TSP]{TSP::TSP()}} is applied to reorder child terms.
}