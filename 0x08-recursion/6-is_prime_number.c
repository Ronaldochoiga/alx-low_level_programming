#include "main.h"

int actual_prime(int n, int j);

/**
 * is_prime_number - tells whether prime or not
 * @n: num evaluated
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - determine number recursive way
 * @n: num to be checked
 * @j: iterating no
 * Return: 1 or 0
 */
int actual_prime(int n, int j)
{
	if (j == 1)
		return (1);
	if (n % j == 0 && j > 0)
		return (0);
	return (actual_prime(n, j - 1));
}
