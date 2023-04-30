#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns own code
 * @argc: counter
 * @argv: vector
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int j, i;
	char *k;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	j = atoi(argv[1]);

	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}

	k = (char *)main;

	for (i = 0; i < j; i++)
	{
		if (i == j - 1)
		{
			printf("%02hhx\n", k[i]);
			break;
		}
		printf("%02hhx ", k[i]);
	}
	return (0);
}
