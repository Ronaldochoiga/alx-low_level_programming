#include "main.h"

/**
 * get_bit - return val of bit at index in a number
 * @n: search number
 * @index: bit index
 *
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bvl;

	if (index > 63)
		return (-1);

	bvl = (n >> index) & 1;

	return (bvl);
}
