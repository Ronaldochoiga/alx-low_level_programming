#include "main.h"
#include <stddef.h>

/**
 * _strchr - main parameter
 * @s: functional parameter
 * @c: functional parameter
 * Return: zero
 **/

char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
