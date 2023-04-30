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
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));

}
