#include <stdlib.h>
#include "main.h"
/**
 * *_memset - main function
 *
 *@s: functional parameter
 *
 *@b: funtional parameter
 *
 *@n: functional parameter
 *
 *Return: s
 **/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
/**
 * *_calloc - main function and memory allocator
 *
 *@nmemb: functional parameter
 *
 *@size: functional parameter
 *
 *Return: final allocation
 *
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
	{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	_memset(p, 0, nmemb * size);
	return (p);
}
