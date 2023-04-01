#include "main.h"

/**
 *_isdigit - main function and checks where digit or not
 *
 *@c: functional parameter
 *
 *Return: always 0
 *
 **/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
