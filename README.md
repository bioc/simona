# simone: Semantic Similarity in Bio-ontologies


## Install

```r
devtools::install_github("jokergoo/simone")
```

## Usage

```r
library(simone)
parents  = c("a", "a", "b", "b", "c", "d")
children = c("b", "c", "c", "d", "e", "f")
dag = create_ontology_DAG(parents, children)
dag
```

```
## An ontology_DAG object:
##   Source: Ontology 
##   6 terms / 6 relations
##   Root: a 
##   Terms: a, b, c, d, ...
##   Max depth: 3 
##   Aspect ratio: 0.67:1 (based on the longest distance to root)
##                 0.68:1 (based on the shortest distance to root)
```

From GO:

```r
dag = create_ontology_DAG_from_GO_db("BP", org_db = "org.Hs.eg.db")
dag
```

```
An ontology_DAG object:
  Source: GO BP / GO.db package
  28140 terms / 56449 relations
  Root: GO:0008150
  Terms: GO:0000001, GO:0000002, GO:0000003, GO:0000011, ...
  Max depth: 18
  Aspect ratio: 342.43:1 (based on the longest distance to root)
                780.22:1 (based on the shortest distance to root)
  Relations: is_a, part_of
  Annotations are available.

With the following columns in the metadata data frame:
  id, name, definition
```

The following IC methods are provided:

```
> all_ic_methods()
 [1] "IC_offspring"     "IC_height"        "IC_annotation"    "IC_universal"
 [5] "IC_Zhang_2006"    "IC_Seco_2004"     "IC_Zhou_2008"     "IC_Seddiqui_2010"
 [9] "IC_Sanchez_2011"  "IC_Meng_2012"     "IC_Wang_2007"
```

The following semantic similarity methods are provided:

```
> all_term_sim_methods()
 [1] "Sim_Lin_1998"         "Sim_Resnik_1999"      "Sim_FaITH_2010"
 [4] "Sim_Relevance_2006"   "Sim_SimIC_2010"       "Sim_XGraSM_2013"
 [7] "Sim_GraSM_2005"       "Sim_EISI_2015"        "Sim_AIC_2014"
[10] "Sim_Zhang_2006"       "Sim_universal"        "Sim_Wang_2007"
[13] "Sim_Rada_1989"        "Sim_Resnik_edge_2005" "Sim_Leocock_1998"
[16] "Sim_WP_1994"          "Sim_Slimani_2006"     "Sim_Shenoy_2012"
[19] "Sim_Pekar_2002"       "Sim_Stojanovic_2001"  "Sim_Wang_edge_2012"
[22] "Sim_Zhong_2002"       "Sim_AlMubaid_2006"    "Sim_Li_2003"
[25] "Sim_RSS_2013"         "Sim_HRSS_2013"        "Sim_Shen_2010"
[28] "Sim_SSDD_2013"        "Sim_Jiang_1997"       "Sim_Kappa"
[31] "Sim_Jaccard"          "Sim_Dice"             "Sim_Overlap"
```

The following group similarity methods are provided:

```
> all_group_sim_methods()
 [1] "GroupSim_pairwise_avg"            "GroupSim_pairwise_max"
 [3] "GroupSim_pairwise_BMA"            "GroupSim_pairwise_BMM"
 [5] "GroupSim_pairwise_ABM"            "GroupSim_pairwise_HDF"
 [7] "GroupSim_pairwise_MHDF"           "GroupSim_pairwise_VHDF"
 [9] "GroupSim_pairwise_Froehlich_2007" "GroupSim_pairwise_Joeng_2014"
[11] "GroupSim_SimALN"                  "GroupSim_SimINT"
[13] "GroupSim_spgk"                    "GroupSim_SimGIC"
[15] "GroupSim_SimDIC"                  "GroupSim_SimUIC"
[17] "GroupSim_SimUI"                   "GroupSim_SimDB"
[19] "GroupSim_SimUB"                   "GroupSim_SimNTO"
[21] "GroupSim_SimCOU"                  "GroupSim_SimCOT"
[23] "GroupSim_SimLP"                   "GroupSim_Ye_2005"
[25] "GroupSim_SimCHO"                  "GroupSim_SimALD"
[27] "GroupSim_Jaccard"                 "GroupSim_Dice"
[29] "GroupSim_Overlap"                 "GroupSim_Kappa"
```

There is also a visualization on the complete huge DAG:

```r
dag_circular_viz(dag, reorder_level = 3, legend_labels_from = "name")
```


![image](https://github.com/jokergoo/simone/assets/449218/9be7c8e6-0061-46a8-93ad-4a92d0a5fe27)


The methods of semantic similarity implemented in **simone** are mainly from
the [supplementary file](https://oup.silverchair-cdn.com/oup/backfile/Content_public/Journal/bib/18/5/10.1093_bib_bbw067/2/bbw067_supplementary_file.pdf?Expires=1692176766&Signature=Ks4C96x-kinySVP7rzVzMn8cGnQWXOqkB-6gYHhs48Bl9A2Vj~-mcI9pEnvntNBvjBD1hp4ZncMWUNT-y1ArrrQgDJ0dCCEJp5LG0Ag2oPWsC5NFEeUQiYNZCXal8Kwa3Ze1vtDHjIwZpT9-sZhn9ryqKHd3C88RvuGx10jcSYRL1Pec0F~a9CnrbivieCfFELg2OQTf5zpAobxhlqzWqv~sa1b62PunNZ~XkmnTGOJoSMQFnNaBy~bDNEf9Pd6eRYaOc8MUh5Br4xB4y8mivT6Et2vKzLrGJFQjYpvouQpBu0nf03xwHVmNFN5-6LsDnpyQPCy4nQ5DHYltVHkEOA__&Key-Pair-Id=APKAIE5G5CRDK6RD3PGA)
of the paper ["Mazandu et al., Gene Ontology semantic similarity tools: survey
on features and challenges for biological knowledge discovery. Briefings in
Bioinformatics 2017"](https://doi.org/10.1093/bib/bbw067). Original
denotations have been slightly modified to make them more consistent. Also
more explanations have been added in this vignette. Credits go to
the original paper.


## License

MIT @ Zuguang Gu
