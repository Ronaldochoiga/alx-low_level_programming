#include "main.h"
int is_prime_number(int n);
int is_divisible(int x, int d);
/**
 *is_divisible - main parameter
 *
 *is_prime_number - main parameter
 *
 *@x: functional parameter that is the number to be evaluated
 *
 *@d: functional parameter and dividing number
 *
 *Return: 0 or 1
 *
 **/
int is_divisible(int x, int d)
{
	if (x % d == 0)
		return (0);
	if (d == x / 2)
		return (1);
	return (is_divisible(x, d + 1));
}
