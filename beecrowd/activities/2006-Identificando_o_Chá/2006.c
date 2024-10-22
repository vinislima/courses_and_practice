
#include <stdio.h>

int	main(void)
{
	int	type_tea;
	int tea_one, tea_two, tea_three, tea_four, tea_five;
	int count_number;
	int count;

	scanf("%d", &type_tea);
	scanf("%d" "%d" "%d" "%d" "%d", &tea_one, &tea_two, &tea_three, &tea_four, &tea_five);
	int teas[] = {tea_one, tea_two, tea_three, tea_four, tea_five};

	count = 0;
	count_number = 0;
	while (count <= 4)
	{
		if (teas[count] == type_tea)
			count_number++;
		count++;
	}

	printf("%d\n", count_number);
	return (0);
}