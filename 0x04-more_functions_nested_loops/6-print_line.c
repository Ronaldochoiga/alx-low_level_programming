#include "main.h"

/**
 *print_line - print lines
 *
 *Return: always 0
 *
 *@n: functional parameter associated with the values of the straight line
 *
 **/
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	putchar('\n');
}
