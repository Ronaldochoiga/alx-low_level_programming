#include "main.h"

/**
 *_strspn - gets the length of the prefix substring
 *
 *@s: the string containing the substring
 *
 *@accept: the prefix to be measured
 *
 *Return: the length of the prefix
 *
 **/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int i;

	while (*s)
	{
		for (i = 0 ; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				b++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (b);
		}
		s++;
	}
	return (b);
}