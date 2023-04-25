#include <stdlib.h>
#include "main.h"

/**
 * *array_range - main function that creates array of integers
 *
 *@min: functional parameter
 *
 *@max: functional parameter
 *
 *Return: final pointer
 *
 **/
int *array_range(int min, int max)
{
	int *p;
	int a, s;

	if (min > max)
		return (NULL);
	s = max - min + 1;
	p = malloc(sizeof(int) * s);
	if (p == NULL)
		return (NULL);
	for (a = 0; min <= max; a++)
		p[a] = min++;
	return (p);
}
