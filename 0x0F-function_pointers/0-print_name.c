#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - name print through pointer to function
 * @name: name to print
 * @f: functional pointer
 * Return: zero
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
