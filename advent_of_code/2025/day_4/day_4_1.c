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
	int		rows = 0;
	int		cols = 0;
	char	line[MAX_SIZE];

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

	int	accessible_count = 0;
	int	d_row[] = {-1, -1, -1, 0, 0, 1, 1, 1};
	int	d_col[] = {-1, 0, 1, -1, 1, -1, 0, 1};

	int	r = 0;
	while (r < rows)
	{
		int	c = 0;
		while (c < cols)
		{
			if (grid[r][c] == '@')
			{
				int	neighbor_count = 0;
				int	k = 0;
				while (k < 8)
				{
					int	ni = r + d_row[k];
					int	nj = c + d_col[k];
					int	is_inside_row = (ni >= 0 && ni < rows);
					int	is_inside_col = (nj >= 0 && nj < cols);

					if (is_inside_row && is_inside_col)
					{
						if (grid[ni][nj] == '@')
							neighbor_count++;
					}
					k++;
				}
				if (neighbor_count < 4)
					accessible_count++;
			}
			c++;
		}
		r++;
	}
	printf("%d\n", accessible_count);

	return (0);
}
