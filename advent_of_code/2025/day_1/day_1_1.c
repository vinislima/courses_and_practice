#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	FILE *file = (fopen("input.txt", "r"));
	if (file == NULL)
	{
		perror("Error to open the file");
		return (1);
	}

	int		current_pos = 50;
	int		zero_count = 0;
	char	line[32];

	while (fgets(line, sizeof(line), file))
	{
		char	direction = line[0];
		int		amount = atoi(&line[1]);

		if (direction == 'R')
			current_pos = (current_pos + amount) % 100;
		else if (direction == 'L')
		{
			current_pos = (current_pos - amount) % 100;

			if (current_pos < 0)
				current_pos += 100;
		}
		if (current_pos == 0)
			zero_count++;
	}
	fclose(file);
	printf ("The password is %d\n", zero_count);

	return (0);
}
