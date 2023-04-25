#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"
/**
 *is_digit - main function
 *
 *@s: functional parameter
 *
 *Return: 0 or 1
 *
 **/
int is_digit(char *s)
{
	int j = 0;

	while (s[j])
	{
		if (s[j] < '0' || s[j] > '9')
			return (0);
		j++;
	}
	return (1);
}
/**
 *_strlen - main function
 *
 *@s: functional parameter
 *
 *Return: len str
 *
 **/
int _strlen(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}
/**
 *errors - eliminates errors for main function
 *
 *Return: 98
 *
 **/
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 *main - main function
 *
 *@argv: vector
 *
 *@argc: counter
 *
 *Return: zero
 *
 **/
int main(int argc, char *argv[])
{
	char *y, *z;
	int a, b, r, d, e, f, g, *h, j = 0;

	y = argv[1], z = argv[2];
	if (argc != 3 || !is_digit(y) || !is_digit(z))
		errors();
	a = _strlen(y);
	b = _strlen(z);
	r = a + b + 1;
	h = malloc(sizeof(int) * r);
	if (!h)
		return (1);
	for (d = 0; d <= a + b; d++)
		h[d] = 0;
	for (a = a - 1; a >= 0; a--)
	{
		f = y[a] - '0';
		e = 0;
		for (b = _strlen(z) - 1; b >= 0; b--)
		{
			g = z[b] - '0';
			e += h[a + b + 1] + (f * g);
			h[a + b + 1] = e % 10;
			e /= 10;
		}
		if (e > 0)
			h[a + b + 1] += e;
	}
	for (d = 0; d < r - 1; d++)
	{
		if (h[d])
			j = 1;
		if (j)
			_putchar(h[d] + '0');
	}
	if (!j)
		_putchar('0');
	_putchar('\n');
	free(h);
	return (0);
}
