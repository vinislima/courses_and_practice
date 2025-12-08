#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_invalid(unsigned long long n)
{
	char	s[64];
	sprintf(s, "%llu", n);
	int		total_len = strlen(s);

	int	p_len = 1;
	while (p_len <= total_len / 2)
	{
		if (total_len % p_len == 0)
		{
			int	is_pattern_match = 1;
			int	j = p_len;

			while (j < total_len)
			{
				if (s[j] != s[j % p_len])
				{
					is_pattern_match = 0;
					break;
				}
				j++;
			}
			if (is_pattern_match == 1)
				return (1);
		}
		p_len++;
	}
	return (0);
}

int	main(void)
{
	FILE	*file = fopen("input.txt", "r");

	if (!file)
	{
		perror ("Error to open the file");
		return (1);
	}

	char	*line = NULL;
	size_t	len = 0;

	if (getline(&line, &len, file) == -1)
	{
		free(line);
		fclose(file);
		return (1);
	}

	unsigned long long	total_sum = 0;
	char				*range_token = strtok(line, ",");

	while (range_token != NULL)
	{
		unsigned long long	start, end;

		if (sscanf(range_token, "%llu-%llu", &start, &end) == 2)
		{
			unsigned long long	current = start;

			while (current <= end)
			{
				if (is_invalid(current))
					total_sum += current;
				current++;
			}
		}
		range_token = strtok(NULL, ",");
	}
	printf("%llu\n", total_sum);

	free(line);
	fclose(file);
	return (0);
}