#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *main - function
 *
 *@argc: counter
 *
 *@argv: vector
 *
 *Return: 1 or 0
 *
 **/

int main(int argc, char *argv[])
{
	int p, t, c, a;
	int money[] = {25, 10, 5, 2, 1};

	c = p = t = a = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	t = atoi(argv[1]);
	if (t <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (money[p] != '\0')
	{
		if (t >= money[p])
		{
			a = (t / money[p]);
			c += a;
			t -= money[p] * a;
		}
		p++;
	}
	printf("%d\n", c);
	return (0);
}
