#include <stdlib.h>
#include "main.h"

/**
  ***alloc_grid - returns a ptr to a 2D arr[int]
  *@width: int var
  *@height: int var
  *Return: a pointer(int)
  */
int **alloc_grid(int width, int height)
{
	int a, b, **grid, *row;

	if (width <= 0 || height <= 0)
		return (0);

	grid = malloc(height * sizeof(int *));
	if (grid == 0)
		return (0);
	for (a = 0; a < height; a++)/*each index in grid*/
	{
		row = malloc(width * sizeof(int));
		if (row == 0)
		{
			for (a = 0; a < height; a++)
			{/*if row fails allo, free prev allo grid*/
				free(grid[a]);
			}
			free(grid);
			return (0);
		}
		for (b = 0; b < width; b++)/*if allo'd*/
		{
			row[b] = 0;/*setting 0*/
		}
		grid[a] = row;/*assigng the allo'd row to the ath elem of grid*/
	}
	return (grid);
}

