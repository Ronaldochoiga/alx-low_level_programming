#include "main.h"
/**
 *_puts_recursion - prints string as the main function
 *
 *@s: functional parameter
 *
 *Return: always zero
 *
 **/

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
