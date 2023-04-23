#include "main.h"
/**
 * _strlen - main parameter
 * @s: functional parameter
 * Return: i
 **/
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
