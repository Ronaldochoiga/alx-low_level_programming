#include "main.h"
/**
 * _memset - main function
 *
 * @s: functiuonal perimeter
 *
 * @b: functional perimeter
 *
 * @n: functional parameter
 *
 * Return: new set
 **/
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
