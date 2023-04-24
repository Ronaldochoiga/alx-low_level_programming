#include "main.h"
#include <stdio.h>

/**
 *main - this is the main function
 *
 *@argc: the is the functional parameter(counter)
 *
 *@argv: this is the parameter vector
 *
 *Return: zero
 *
 **/

int main(int argc, char *argv[])

{
	int j;

	for (j = 0 ; j < argc ; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
