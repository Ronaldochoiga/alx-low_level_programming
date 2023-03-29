#include "main.h"
/**
 *_strncpy - function
 *
 *@dest:funtional parameter
 *
 *@src: source file
 *
 *@n: functional parameter
 *
 *Return: always 0
 *
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
