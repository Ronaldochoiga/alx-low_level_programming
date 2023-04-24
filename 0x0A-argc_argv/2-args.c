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
	int i = 0;

	if (argc >= 0)
	{
		for (i = 0 ; i <= argc ; i++)
		{
			printf("%s\n", argv[i]);
			if (i == argc)
			{
				i++;
				break;
			}
		}
	}
	return (0);
}
