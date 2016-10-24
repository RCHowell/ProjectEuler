# @author R. C. Howell
# @question 1
# @lang R
# @question Find the sum of all the multiples of 3 or 5 below 1000.
# @solution 233168

threes   <- seq(from = 0, to = 999, by = 3)
fives    <- seq(from = 0, to = 999, by = 5)
fifteens <- seq(from = 0, to = 999, by = 15)

sum(sum(threes), sum(fives)) - sum(fifteens)