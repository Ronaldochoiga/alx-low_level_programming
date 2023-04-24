#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 *check_num - main fuction
 *
 *@str: functional parameter
 *
 *Return: zero
 *
 **/

int check_num(char *str)
{
	unsigned int i;

	i = 0;
	while (i < strlen(str))
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 *main - main function
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
	int i;
	int j;
	int s = 0;

	i = 1;
	while (i < argc)
	{
		if (check_num(argv[i]))
		{
			j = atoi(argv[i]);
			s += j;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", s);
	return (0);
}