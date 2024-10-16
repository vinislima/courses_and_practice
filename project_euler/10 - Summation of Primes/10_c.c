
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool num_prime(int number)
{	
	int		a = number;
	int		b = 2;
	bool	prime = true;

	while (b * b <= a)
	{
		if (number % b == 0)
		{
			prime = false;
			break;
		}
		b++;
	}
	return prime;
}

int	generate_primes(int limits)
{
	int	number = 2;
	int	count = 0;
	int	sum_primes = 0;

	while (count < limits)
	{
		if (num_prime(number))
		{
			sum_primes = sum_primes + number;
			count++;
		}
		else
			count++;
		number++;
	}
	return sum_primes;
}

int	main(void)
{
	int	limits = 2000000;
	int primes = generate_primes(limits);
	printf("%d\n", primes);
	return (0);
}