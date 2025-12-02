#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	FILE *file = fopen("input.txt", "r");
	if (file == NULL)
	{
		perror("Error to open the file");
		return (1);
	}
	
	int			current_pos = 50;
	long long	zero_hits = 0;
	char		line[32];

	while (fgets(line, sizeof(line), file))
	{
		char	direction = line [0];
		int		amount = atoi(&line[1]);
		
		zero_hits += (amount / 100);
		int		remainder = amount % 100;

		while (remainder > 0)
		{
			if (direction == 'R')
			{
				current_pos++;
				if (current_pos > 99)
					current_pos = 0;
			}
			else if (direction == 'L')
			{
				current_pos--;
				if (current_pos < 0)
					current_pos = 99;
			}
			if (current_pos == 0)
				zero_hits++;
			remainder--;
		}
	}
	fclose(file);

	printf ("The password is %lld\n", zero_hits);

	return (0);
}
