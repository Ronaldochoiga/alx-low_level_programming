#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - main function
 *
 *@ptr: functional parameter
 *
 *@old_size: functional parameter
 *
 *@new_size: functional parameter
 *
 *Return: pointer
 *
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *o;
	unsigned int j;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	p = malloc(new_size);
	if (!p)
		return (NULL);
	o = ptr;
	if (new_size < old_size)
	{
		for (j = 0; j < new_size; j++)
			p[j] = o[j];
	}
	if (new_size > old_size)
	{
		for (j = 0; j < old_size; j++)
			p[j] = o[j];
	}

	free(ptr);
	return (p);
}
