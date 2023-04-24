#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 *main - this is the main function
 *
 *@argv: this is the vector
 *
 *@argc: this is the counter
 *
 *Return: zero
 *
 **/

int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i *j);
		return (0);
	}
	printf("Error\n");
	return(1);
}
