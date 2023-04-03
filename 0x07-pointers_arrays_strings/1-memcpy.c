#include "main.h"


/**
 *_memcpy - the function copies memory bytes from src to the dest
 *
 *@dest: destination memory copying area
 *
 *@src: this is the source of the memory in bytes to be copied
 *
 *@n: this is the size of the memory to be copied
 *
 *Return: this will return the amount of byte copied @n.
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
