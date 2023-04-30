#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - return results of an operation
 * @argc: arguments counter
 * @argv: arguments vector
 * Return: zero on success
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int one, two;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	one = atoi(argv[1]);
	op = argv[2];
	two = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && two == 0) ||
	    (*op == '%' && two == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(one, two));

	return (0);
}
