#include "main.h"
#include <stdio.h>

/**
 *main - main function and prints numbers from 1 to 100
 *
 *Return: always 0 for success
 *
 **/

int main(void)
{
	int i;

	for (i = 0 ; i <= 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf("fizz");
		else if (i % 5 == 0 && i % 3 != 0)
			printf("buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("fizzbuzz");
		else if (i == 1)
			printf("%d", i);
		else
			printf(" %d", i);
	}
	printf("\n");
	return (0);
}
