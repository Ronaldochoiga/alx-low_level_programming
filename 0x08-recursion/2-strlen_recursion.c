#include "main.h"

/**
 *_strlen_recursion - shows the string length or size
 *
 *@s: functional perimeter defining string to be measured
 *
 *Return: always zero or the size of the string
 *
 **/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
