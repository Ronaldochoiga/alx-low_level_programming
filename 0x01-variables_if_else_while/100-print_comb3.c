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
	int j;
	int ij;
	int ji;

	for (i = 0 ; i <= 9 ; i++)
	for (j = 0 ; j <= 9; ij++)
	{	putchar(ij + '0');
		if (ij < ji && ((i + j) - (j + i) != 0))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
