#include "main.h"
#include <stdio.h>

/**
 *main - this is the main function
 *
 *@argc: counter
 *
 *@argv: vector
 *
 *Return: zero
 *
 **/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}
