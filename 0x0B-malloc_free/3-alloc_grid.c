#include <stdlib.h>
#include "main.h"
/**
 *alloc_grid - main function(loop for grid)
 *
 *@width: functional parameter
 *
 *@height: functional parameter
 *
 *Return: 2 dimension array(pointer)
 *
 **/
int **alloc_grid(int width, int height)
{
	int **i;
	int l, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	i = malloc(sizeof(int *) * height);
	if (i == NULL)
		return (NULL);
	for (k = 0 ; k < height ; k++)
	{
		i[k] = malloc(sizeof(int) * width);
		if (i[k] == NULL)
		{
			for (; k >= 0 ; k--)
				free(i[k]);
			free(i);
			return (NULL);
		}
	}
	for (k = 0; k < height ; k++)
	{
		for (l = 0 ; l < width ; l++)
			i[k][l] = 0;
	}
	return (i);
}
