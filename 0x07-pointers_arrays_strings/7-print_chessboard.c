#include "main.h"

/**
 *print_chessboard - print the characters in a chessboard format.
 *
 *@a: chess board to be printed.
 *
 *Return: return 0
 *
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; a[i][7]; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);

		_putchar('\n');
	}
}