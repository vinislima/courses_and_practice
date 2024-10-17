
#include<stdio.h>
#include<math.h>

long long int prime_check(long long int number)
{
	long long int i;
	int sqrt_number = sqrt(number);
	i = 2;
	while(i <= sqrt_number)
	{
		if (number % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main()
{
	long long int sum = 0; 
	
	long long i = 2;
	while (i < 2000000) 
	{
		if (prime_check(i))
			sum = sum + i;
		i++;
	}
	printf("Sum: %lld.\n",sum);
}

//142913828922