#include "main.h"
/**
 * _strstr - main function
 * @haystack: functional parameter
 * @needle: functional aparameter
 * Return: zero
 **/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *i != '\0')
		{
			i++;
			j++;
		}

		if (*j == '\0')
			return (haystack);
	}

	return (0);
}
