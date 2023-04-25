#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 *free_grid - main function
 *
 *@grid: funtional parameter(grid)
 *
 *@height: functional parameter(height)
 *
 *Return: zero
 *
 **/
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
