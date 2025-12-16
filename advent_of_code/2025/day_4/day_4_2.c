#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 2000

int main(void)
{
	FILE	*file = fopen("input.txt", "r");
	if (!file)
	{
		perror("Error to open the file");
		return (1);
	}

	char	grid[MAX_SIZE][MAX_SIZE];
	char	to_remove[MAX_SIZE][MAX_SIZE];
	char	line[MAX_SIZE];
	int		rows = 0;
	int		cols = 0;

	while (fgets(line, sizeof(line), file))
	{
		int	len = strlen(line);
		while (len > 0 && (line[len - 1] == '\n' || line[len - 1] == '\r'))
		{
			line[len - 1] = '\0';
			len--;
		}

		if (len > 0 && rows < MAX_SIZE)
		{
			strcpy(grid[rows], line);
			if (cols == 0)
				cols = len;
			rows++;
		}
	}
	fclose(file);

	long long	total_removed = 0;
	int			changed = 1;

	int	d_row[] = {-1, -1, -1, 0, 0, 1, 1, 1};
	int	d_col[] = {-1, 0, 1, -1, 1, -1, 0, 1};

	while (changed)
	{
		changed = 0;
		
		int	r = 0;
		while (r < rows)
		{
			int	c = 0;
			while (c < cols)
			{
				to_remove[r][c] = 0;
				if (grid[r][c] == '@')
				{
					int	neighbor_count = 0;
					int	k = 0;
					while (k < 8)
					{
						int	ni = r + d_row[k];
						int	nj = c + d_col[k];

						int	is_inside = (ni >= 0 && ni < rows && nj >= 0 && nj < cols);

						if (is_inside)
						{
							if (grid[ni][nj] == '@')
								neighbor_count++;
						}
						k++;
					}
					if (neighbor_count < 4)
					{
						to_remove[r][c] = 1;
						changed = 1;
					}
				}
				c++;
			}
			r++;
		}
		if (changed)
		{
			r = 0;
			while (r < rows)
			{
				int	c = 0;
				while (c < cols)
				{
					if (to_remove[r][c] == 1)
					{
						grid[r][c] = '.';
						total_removed++;
					}
					c++;
				}
				r++;
			}
		}
	}
	printf("%lld\n", total_removed);

	return (0);
}
