#include "main.h"
/**
 *print_rev - main function
 *
 *@s: function parameter
 *
 *Return: always 0
 *
 **/

void print_rev(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	for (i = count ; s[i] >= 0 && s[i] != '\0' ; i--)
		_putchar(s[i]);
	_putchar('\n');
}
