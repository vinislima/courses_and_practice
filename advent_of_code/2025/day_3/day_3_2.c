#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

unsigned long long	solve_12(char *line)
{
	int	len = strlen(line);

	while (len > 0 && !isdigit(line[len - 1]))
		len--;

	if (len < 12)
		return (0);
	
	unsigned long long	current_value = 0;
	int					digits_found = 0;
	int					last_index = -1;

	while (digits_found < 12)
	{
		int	needed_after = 11 - digits_found;
		int	search_limit = len - needed_after - 1;

		char	best_digit = -1;
		int		best_index = -1;

		int	i = last_index + 1;
		while (i <= search_limit)
		{
			char	c = line[i];

			if (c > best_digit)
			{
				best_digit = c;
				best_index = i;
			}

			if (best_digit == '9')
				break;

			i++;
		}
		current_value = (current_value * 10) + (best_digit - '0');

		last_index = best_index;
		digits_found++;
	}
	return (current_value);
}

int main(void)
{
	FILE	*file = fopen("input.txt", "r");
	if (!file)
	{
		perror("Error to open the file");
		return (1);
	}

	char				*line = NULL;
	size_t				len = 0;
	unsigned long long	total_sum = 0;

	while (getline(&line, &len, file) != -1)
	{
		if (line[0] == '\n')
			continue;
		
		unsigned long long	line_val = solve_12(line);
		total_sum += line_val;
	}

	printf ("%llu\n", total_sum);

	free(line);
	fclose(file);
	return (0);
}
