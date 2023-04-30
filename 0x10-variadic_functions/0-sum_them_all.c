#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of parameters
 * @n: parameters tto the function
 * @...: functional parameter and variable
 * Return: zero or the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i, j = 0;

	va_start(a, n);

	for (i = 0; i < n; i++)
		j += va_arg(a, int);
	va_end(a);
	return (j);
}
