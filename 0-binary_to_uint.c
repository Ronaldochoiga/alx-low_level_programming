#include "main.h"
/**
 * binary_to_uint - convts dec to usgned int
 * @b: str with the dec val
 *
 * Return: vdl
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int vdl = 0;
	if (!b)
		return (0);
	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		vdl = 2 * vdl + (b[a] - '0');
	}
	return (vdl);
}
