#include "main.h"
/**
 *_print_rev_recursion - reverses a string
 *
 *@s: functional parameter and string to be printed
 *
 *Return: alaways zero or the string to be printed
 *
 **/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
