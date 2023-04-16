#include <stdlib.h>
#include "main.h"
/**
 *free_grid - free 2d dimension array
 *@grid: pointer to be freed
 *@height: height
*/
void free_grid(int **grid, int height)
{
	int a;

	a = 0;

	while (a < height)
	{
		free(grid[a]);
		a++;
	}
	free(grid);
}

