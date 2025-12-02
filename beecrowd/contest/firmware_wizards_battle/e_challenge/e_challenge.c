
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	int	quant;
	scanf("%d", &quant);
	getchar();

	char	input[4000];
	fgets(input, sizeof(input), stdin);

	int numbers[quant];
	int calc, two, three, four, five;

	char *token = strtok(input, " ");
	int index = 0;

	while (token != NULL && index < quant)
	{
		numbers[index] = atoi(token);
		token = strtok(NULL, " ");
		index++;
	}

	calc = 0;
	two = 0;
	three = 0;
	four = 0;
	five = 0;
	while (calc < quant)
	{
		if (numbers[calc] % 2 == 0)
			two++;
		if (numbers[calc] % 3 == 0)
			three++;
		if (numbers[calc] % 4 == 0)
			four++;
		if (numbers[calc] % 5 == 0)
			five++;
		calc++;
	}
	printf("%d Multiplo(s) de 2\n", two);
	printf("%d Multiplo(s) de 3\n", three);
	printf("%d Multiplo(s) de 4\n", four);
	printf("%d Multiplo(s) de 5\n", five);
	return (0);
}