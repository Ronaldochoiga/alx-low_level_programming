#include "main.h"
#include <stdio.h>
int is_prime_number(int n);
int is_divisible(int num, int div);
/**
 *is_divisible - main parameter
 *
 *is_prime_number - main parameter
 *
 *@num: functional parameter that is the number to be evaluated
 *
 *@div: functional parameter and dividing number
 *
 *Return: 0 or 1
 *
 **/
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);
	return (is_divisible(num, div + 1));
}
