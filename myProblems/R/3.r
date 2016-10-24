# @author R. C. Howell
# @question 3
# @lang R
# @question What is the largest prime factor of the number 600851475143?
# @solution 6857

library.path <- cat(.libPaths())
library(gmp, lib.loc = library.path)

factors <- factorize(600851475143)
factors[length(factors)]