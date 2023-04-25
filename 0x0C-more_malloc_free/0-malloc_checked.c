#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - main function
 *
 *@b: functional parameter
 *
 *Return: allocated memory
 *
 **/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
