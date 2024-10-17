#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c;
	long long product;

	a = 1;
	while (a < 1000)
	{
		b = a;
		while (b < 1000 - a)
		{
			c = 1000 - a - b;
			if ((a * a) + (b * b) == (c * c))
			{
				product = a * b * c;
				printf("A: %i, B: %i, C: %i \n", a, b, c);
				printf("%lld\n", product);
				return (0);
			}
			b++;
		}
		a++;
	}
}