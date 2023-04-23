#include "main.h"
/**
 * _strspn - main function
 * @s: functional parameter
 * @accept: function parameter
 * Return: i
 *
 **/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				i++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (i);
		}
		s++;
	}
	return (i);
}
