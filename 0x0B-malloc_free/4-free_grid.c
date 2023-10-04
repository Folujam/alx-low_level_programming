#include <stdlib.h>
#include "main.h"

/**
  *free_grid - frees a 2D
  *@grid: pointer pointer to int var
  *@height: int var
  *Return: void
  */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}

