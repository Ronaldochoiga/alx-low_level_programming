#include "main.h"
#include <stdlib.h>
/**
 *create_array - main function
 *
 *@size: functional parameters
 *
 *@c: functional parameter
 *
 *Return: pointer or NULL
 *
 **/

char *create_array(unsigned int size, char c)
{
	char *j;
	unsigned int k;

	j = malloc(sizeof(char) * size);

	if (size == 0 || j == NULL)
		return (NULL);
	for (k = 0 ; k < size ; k++)
		j[k] = c;
	return (j);
}
