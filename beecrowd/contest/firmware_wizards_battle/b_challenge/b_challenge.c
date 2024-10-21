#include <stdio.h>
 
int main() {

	int	age_mon, age_a, age_b, age_c, oldest;

	age_c = 0;

	scanf("%i", &age_mon);
	scanf("%i", &age_a);
	scanf("%i", &age_b);

	age_c = age_mon - (age_a + age_b);

	if (age_a > age_b && age_a > age_c)
	{
		oldest = age_a;
	}
	else if (age_b > age_a && age_b > age_c)
	{
		oldest = age_b;
	}
	else
		oldest = age_c;
	printf("%i\n", oldest);
	return 0;
}
