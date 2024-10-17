#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float	a, b, a_calc, b_calc, clock;
	char	a_str[10], b_str[10];

	scanf("%s" "%s", a_str, b_str);

	a = atof(a_str);
	b = atof(b_str);


	if (a == b)
	{
		clock = 24;
		printf("O JOGO DUROU %.0f HORA(S)\n", clock);
		return (0);
	}
	if (a >= 12 && b >= 12)
	{
		clock = b - a;
		printf("O JOGO DUROU %.0f HORA(S)\n", clock);
		return (0);
	}
	if (a >= 12 && b < 12)
	{
		a_calc = 24 - a;
		clock = a_calc + b;
		printf("O JOGO DUROU %.0f HORA(S)\n", clock);
		return (0);
	}
	if (a < 12 && b >= 12)
	{
		clock = b - a;
		printf("O JOGO DUROU %.0f HORA(S)\n", clock);
		return (0);
	}
	if ((a < 12 && b < 12) && a > b)
	{
		clock = 24 + (b - a);
		printf("O JOGO DUROU %.0f HORA(S)\n", clock);
		return (0);
	}
	return(0);
}