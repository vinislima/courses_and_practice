import math

def prime_check(number):
	sqrt_number = int(math.sqrt(number))
	i = 2
	while (i <= sqrt_number):
		if (number % i == 0):
			return (0)
		i += 1
	return (1)

sum = 0
i = 2
while (i < 2000000):
	if (prime_check(i)):
		sum += i
	i += 1
print(sum)

#142913828922