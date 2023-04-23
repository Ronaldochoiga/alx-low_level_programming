#include "main.h"
/**
 * _puts - main parameter
 * @str: function paframeter
 **/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
