
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	float	a, b, c;
	float	bigger, size_a, size_b;

	char	a_str[10], b_str[10], c_str[10];

	scanf("%s" "%s" "%s", a_str, b_str, c_str);

	a = atof(a_str);
	b = atof(b_str);
	c = atof(c_str);

	if (a == b && b == c && c == a)
	{
		printf("TRIANGULO ACUTANGULO\n");
		printf("TRIANGULO EQUILATERO\n");
		return (0);
	}
	else if (a > b && a > c)
	{
		bigger = a;
		size_a = b;
		size_b = c;
	}
	else if (b > a && b > c)
	{
		bigger = b;
		size_a = a;
		size_b = c;
	}
	else if (c > a && c > b)
	{
		bigger = c;
		size_a = a;
		size_b = b;
	}
	else
	{
		bigger = a;
		size_a = b;
		size_b = c;
	}

	if (bigger >= size_a + size_b)
		{
			printf("NAO FORMA TRIANGULO\n");
			return (0);
		}
	if ((bigger * bigger) == (size_a * size_a) + (size_b * size_b))
		printf("TRIANGULO RETANGULO\n");
	if ((bigger * bigger) > (size_a * size_a) + (size_b * size_b))
		printf("TRIANGULO OBTUSANGULO\n");
	if ((bigger * bigger) < (size_a * size_a) + (size_b * size_b))
		printf("TRIANGULO ACUTANGULO\n");
	if ((size_a == size_b && size_a != bigger) || (size_a == bigger && size_a != size_b) || (size_b == bigger && size_b != size_a))
		printf("TRIANGULO ISOSCELES\n");
	return (0);
}