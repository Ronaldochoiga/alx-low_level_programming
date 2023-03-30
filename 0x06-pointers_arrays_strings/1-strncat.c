#include "main.h"

/**
 *_strncat - main function
 *
 *@dest: functional parameter
 *
 *@src: functional parameter
 *
 *@n: functional parameter
 *
 *Return: 0
 *
 **/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int desti = 0;
	int srci = 0;

	for (i = 0 ; dest[i] != '\0' ; i++)
		desti++;
	for (i = 0 ; src[i] != '\0' ; i++)
		srci++;
	for (i = 0 ; i < n ; i++)
		dest[desti + i] = src[srci];
	return (dest);
}
