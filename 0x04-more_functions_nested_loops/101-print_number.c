#include "main.h"

/**
 *print_number - prints numbers
 *
 *@n: funtional parameter and the integer to be printed
 *
 *Return: always 0
 *
 **/
void print_number(int n)
{
	unsigned int i;

	i = n;
	if (n < 0)
	{
		_putchar(45);
		i = - n;
	}
	if (i / 10)
		print_number(i / 10);
	_putchar((i % 10) + '0');
}
