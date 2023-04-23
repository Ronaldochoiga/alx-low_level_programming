#include "main.h"

/**
 * _atoi - converter function
 *
 * @s: functional string
 *
 * Return: r
 **/

int _atoi(char *s)
{
	int sn = 1, k = 0;
	unsigned int r = 0;

	while (!(s[k] <= '9' && s[k] >= '0') && s[k] != '\0')
	{
		if (s[k] == '-')
			sn *= -1;
		k++;
	}
	while (s[k] <= '9' && (s[k] >= '0' && s[k] != '\0'))
	{
		r = (r * 10) + (s[k] - '0');
		k++;
	}
	r *= sn;
	return (r);
}
