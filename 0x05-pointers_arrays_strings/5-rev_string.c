#include "main.h"

/**
 *rev_string - main function
 *
 *@s: functional parameter
 *
 *Return: always 0
 */

void rev_string(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	for (i = count ; i >= 0 && i != '\0' ; i--)
		_putchar(s[i]);
	_putchar('\n');
}
