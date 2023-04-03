#include "main.h"

/**
 *_strpbrk - locates the first occurrence in the
 *string s of any of the bytes in the string accept.
 *
 *@s: the string to be evaluated.
 *
 *@accept: the string holding the bytes.
 *
 *Return: pointer in @s or null
 *
 **/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
