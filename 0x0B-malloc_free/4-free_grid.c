#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function to free grid
 * @grid: 2 dim. array to free
 * @height: size of the height
 * Return: free grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
