# $ln(\frac{1-\alpha}{\alpha}) = 3 Basel(\frac{1-\alpha}{\alpha})$

$\alpha \approx \frac{1}{137.03599920611}$  [Léo et al. 2020]

We treat $\alpha$ as a probability, and define the probability ratio of r as:

$r = \frac{1-\alpha}{\alpha} \approx 136.03599920611$

Define the limited Basel sum function as:

$Basel(n) = \frac { 1 }{ 1^{ 2 } } + \frac { 1 }{ 2^{ 2 } } + \frac { 1 }{ 3^{ 2 } } + \cdots + \frac { 1 }{ { n }^{ 2 } }$

I found that:

$Basel(\lfloor r \rfloor) < \frac{ln(r)}{3} < Basel(\lceil r \rceil)$

Proof:

$1.637608092287405 < 1.637639850251368 < 1.63766137163100$

This implies that $\alpha$ approximates the root of the following equation: 

$ln(\frac{1-\alpha}{\alpha}) = 3 Basel(\frac{1-\alpha}{\alpha})$

$4.9129195507541 \approx 4.9128300715298$

$error=1.82132107459588e-05$

**Time of the discovery: Yi Wang, 2023-05-22, ShangHai, China.**
