#include "main.h"
/**
 *_puts - main function
 *
 *@str: function parameter
 *
 *Return: always 0
 *
 **/

void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
