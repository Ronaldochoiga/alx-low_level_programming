#include "main.h"

/**
 *_isupper - checks whether upper case or lower case
 *
 *@c: functional parameter
 *
 *Return: always 0
 *
 **/

int _isupper(int c)
{
	if ((c == 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
