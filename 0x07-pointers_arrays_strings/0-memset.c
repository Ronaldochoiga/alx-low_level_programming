#include "main.h"

/**
 *_memset - fills n bytes filled by @s and @c
 *
 *@s: pointer to the memory area to be filled
 *
 *@c: the character to fill the memory area
 *
 *@n: the number of bytes to be filled
 *
 *Return: a pointer to fill the memory area @s.
 *
 */

void *_memset(void *s, int c, size_t n)
{
	unsigned int i;
	unsigned char *m = s, v = c;

	for (i = 0; i < n; i++)
		m[i] = v;

	return (m);
}
