#include "main.h"

/**
 *_strcat - main function
 *
 *@dest: functional parameter
 *
 *@src: funtional parameter
 *
 *Return: 0
 *
 **/

char *_strcat(char *dest, char *src)
{
	int desti = 0;
	int srci = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		desti++;
	for (i = 0 ; src[i] != '\0' ; i++)
		srci++;
	for (i = 0 ; i <= srci ; i++)
		dest[desti + i] = src[i];
	return (dest);
}
