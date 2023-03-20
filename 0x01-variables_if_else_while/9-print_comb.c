#include <stdio.h>

/**
 *main - main function
 *
 *Return: always 0
 *
 **/
int main(void)
{
	int i;

	for (i = 1 ; i <= 9 ; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
