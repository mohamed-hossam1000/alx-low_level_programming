#include <stdlib.h>
/**
 * free_grid- wtv
 * @grid: n
 * @height: n
 */
void free_grid(int **grid, int height);
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
