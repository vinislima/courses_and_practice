#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_invalid(unsigned long long n)
{
	char	s[64];
	sprintf(s, "%llu", n);
	int		len = strlen(s);

	if (len % 2 != 0)
		return (0);

	int	half = len / 2;
	
	int	i = 0;
	while (i < half)
	{
		if (s[i] != s[i + half])
			return (0);
		i++;
	}
	return (1);
}

int	main (void)
{
	FILE *file = fopen("input.txt", "r");
	if (!file)
	{
		perror("Error to open the file");
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
	char *range_token = strtok(line, ",");

	while (range_token != NULL)
	{
		unsigned long long	start;
		unsigned long long	end;

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