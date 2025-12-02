#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

	char input[50];
	int test;
	scanf("%i", &test);
	getchar();
	fgets(input, sizeof(input), stdin);

	char *num1_str = strtok(input, " ");
	char *operator = strtok(NULL, " ");
	char *num2_str = strtok(NULL, " ");

	int num1 = atoi(num1_str);
	int num2 = atoi(num2_str);
	int result;

	if (operator[0] == '+') 
	{
		result = num1 + num2;
	}
	else if (operator[0] == '-')
	{
		result = num1 - num2;
	}
	else if (operator[0] == '*') 
	{
		result = num1 * num2;
	}
	else if (operator[0] == '/')
	{
		if (num2 != 0) 
		{
			result = num1 / num2;
		}
		else
		{
			printf("Erro: Divisão por zero.\n");
			return (0); // Encerra com erro
		}
	}
	else 
	{
		printf("Operador inválido.\n");
		return (0); // Encerra com erro
	}
	if (result <= test)
	{
		printf("OK\n");
	}
	else
	{
		printf("OVERFLOW\n");
	}
	return (0);
}
