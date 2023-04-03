#include "main.h"

/**
 *_strchr - this function locates a character in a string
 *
 *@s: the string
 *
 *@c: the character to be located
 *
 *Return: the character c.
 *
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
