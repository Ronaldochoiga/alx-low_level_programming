#include "main.h"
/**
 *_memcpy - main function
 *@dest: destination
 *@src: source
 *@n: bytes
 *
 *Return: changed copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int y = 0;
	int x = n;

	for (; y < x; y++)
	{
		dest[y] = src[y];
		n--;
	}
	return (dest);
}
