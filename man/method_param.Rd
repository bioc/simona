% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/00_global.R
\name{method_param}
\alias{method_param}
\title{All Papameters of a given method}
\usage{
method_param(IC_method = NULL, term_sim_method = NULL, group_sim_method = NULL)
}
\arguments{
\item{IC_method}{A single IC method name.}

\item{term_sim_method}{A single term similarity method name.}

\item{group_sim_method}{A single group similarity method name.}
}
\value{
A vector of parameter names.
}
\description{
All Papameters of a given method
}
\examples{
method_param(IC_method = "IC_annotation")
method_param(term_sim_method = "Sim_Wang_2007")
}
