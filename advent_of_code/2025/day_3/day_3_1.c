#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int get_max_joltage(char *line)
{
	int	max_val = -1;
	int	len = strlen(line);

	int	i = 0;
	while (i < len - 1)
	{
		if (!isdigit(line[i]))
		{
			i++;
			continue;
		}
		int	d1 = line[i] - '0';

		int	j = i + 1;
		while (j < len)
		{
			if (!isdigit(line[j]))
			{
				j++;
				continue;
			}
			int	d2 = line[j] - '0';
			int	current_val = (d1 * 10) + d2;

			if (current_val > max_val)
				max_val = current_val;

			if (max_val == 99)
				return (99);
			j++;
		}
		i++;
	}
	if (max_val == -1)
		return (0);

	return (max_val);
}

int main(void)
{
	FILE	*file = fopen("input.txt", "r");

	if (!file)
	{
		perror("Error to open the file");
		return (1);
	}

	char		*line = NULL;
	size_t		len = 0;
	long long	total_joltage = 0;

	while (getline(&line, &len, file) != -1)
	{
		int		line_max = get_max_joltage(line);
		total_joltage += line_max;
	}

	printf("%lld\n", total_joltage);

	free(line);
	fclose(file);
	return (0);
}