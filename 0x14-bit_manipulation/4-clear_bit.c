#include "main.h"

/**
 * clear_bit - sets bit value to 00
 * @n: chainging num pointer
 * @index: clered bit pointer
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
