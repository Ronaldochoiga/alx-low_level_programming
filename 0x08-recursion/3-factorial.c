#include "main.h"

/**
 *factorial - gives factorial of numbers as the main function
 *
 *@n: the functional parameter
 *
 *Return: n or -1 for error
 *
 **/

int factorial(int n)
{
	int i = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (-1);
	{
		i *= factorial(n - 1);

		return (i);
	}
}
