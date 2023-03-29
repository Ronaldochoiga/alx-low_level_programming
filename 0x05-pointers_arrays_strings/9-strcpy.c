#include "main.h"
#include <stddef.h>

/**
 *_strcpy - main function
 *
 *@src: function parameter
 *
 *@dest: function parameter
 *
 *Return: always 0
 *
 **/

char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
		return (NULL);
	for (i = 0 ; src[i] != '\0' ; i++)
		src[i] = dest[i];
	return (dest);
}
