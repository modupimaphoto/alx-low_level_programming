#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the dimesional.
 * @height: hight of the demesional.
 * Return: a pointer or null.
 */
int **alloc_grid(int width, int height)
{
	int  **grid;
	int a, b, c;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(width * sizeof(int));
		if (grid[a] == NULL)
		{
			for (b = 0; b < a; b++)
				free(grid[b]);
			free(grid);
			return (NULL);
		}
		for (c = 0; c < width; c++)
			grid[a][c] = 0;
	}
	return (grid);
}
