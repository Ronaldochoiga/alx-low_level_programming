#include "main.h"

int find_sqrt(int n, int r);
int _sqrt_recursion(int n);
/**
 *find_sqrt - gives square root of a number
 *
 *@n: functional parameter
 *
 *@r: function parameter and the rooft to be tested
 *
 *Return: root or -1
 *
 **/
int find_sqrt(int n, int r)
{
	if ((r * r) == n)
		return (r);
	if (r == n / 2)
		return (-1);
	return (find_sqrt(n, r + 1));
}

/**
 *_sqrt_recursion - main root of a number
 *
 *@n: functional parameter
 *
 *Return: n or -1
 *
 **/
int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, r));
}
