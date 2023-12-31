% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/partition.R
\name{partition_by_level}
\alias{partition_by_level}
\alias{partition_by_size}
\title{Partition the DAG}
\usage{
partition_by_level(dag, level = 1, from = NULL, term_pos = NULL)

partition_by_size(dag, size = round(dag_n_terms(dag)/5))
}
\arguments{
\item{dag}{An \code{ontology_DAG} object.}

\item{level}{Depth in the DAG to cut. The DAG is cut below terms (or cut the links to their child terms) with \code{depth == level}.}

\item{from}{A list of terms to cut. If it is set, \code{level} is ignored.}

\item{term_pos}{Internally used.}

\item{size}{Number of terms in a cluster. The splitting stops on a term if all its child-trees are smaller than \code{size}.}
}
\value{
A character vector of top terms in each partition.
}
\description{
Partition the DAG
}
\details{
Let's call the terms below the \code{from} term as "top terms" because they will be on top of the sub-DAGs after the partitioning.
It is possible that a term in the middle of the DAG can be traced back to more than one top terms.
To partition all terms exclusively, a term partitioned to the sub-DAG from the top term with the largest distance to the term.
If a term has the same largest distances to several top terms, a random top term is selected.

In \code{partition_by_size()}, the DAG is first reduced to a tree where a child term only has one parent.
The partition is done recursively by cutting into its child-trees.
The splitting stops when all the child-trees have size less than \code{size}.

\code{NA} is assigned to the \code{from} terms, their ancestor terms, and terms having infinite directed distance to \code{from} terms.
}
\examples{
\donttest{
dag = create_ontology_DAG_from_GO_db()
pa = partition_by_level(dag)
table(pa)
pa = partition_by_size(dag, size = 1000)
table(pa)
}
1
}
