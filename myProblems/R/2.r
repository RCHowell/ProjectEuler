# @author R. C. Howell
# @question 2
# @lang R
# @question By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
# @solution 4613732

MAX <- 4000000

# Setup
fibs <- vector();
fibs[1] <- 1;
fibs[2] <- 2;
i <- 3;

# Create Vector
while (fibs[i-1] < MAX) { 
	fibs[i] <- sum(fibs[i-1], fibs[i-2])
	i <- i + 1
}

# Create vector of only even fib numbers
fibs <- fibs[(fibs %% 2) == 0]

sum(fibs)