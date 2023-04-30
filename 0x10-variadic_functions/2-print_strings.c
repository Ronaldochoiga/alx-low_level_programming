#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - string printer
 * @separator:separates strings
 * @n: amount of strings passed to the system
 * @...: strings to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list i;
	char *j;
	unsigned int k;

	va_start(i, n);

	for (k = 0; k < n; k++)
	{
		j = va_arg(i, char *);

		if (j == NULL)
			printf("(nil)");
		else
			printf("%s", j);

		if (k != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(i);
}
