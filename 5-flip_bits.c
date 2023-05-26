#include "main.h"

/**
 * flip_bits - chainging bit counter
 * @n: first no
 * @m: second no
 *
 * Return: num of changing bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, cnt = 0;
	unsigned long int curr;
	unsigned long int j = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		curr = j >> a;
		if (curr & 1)
			cnt++;
	}

	return (cnt);
}
