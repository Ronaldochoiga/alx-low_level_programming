#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - adding functionality
 *
 *@s1: functional pareameter
 *@s2: functional parameter
 *
 *@n: functional parameter showing byte number
 *
 *Return: resultant
 *
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *i;
	unsigned int a = 0, b = 0, c = 0, d = 0;

	while (s1 && s1[c])
		c++;
	while (s2 && s2[d])
		d++;
	if (n < d)
		i = malloc(sizeof(char) * (c + n + 1));
	else
		i = malloc(sizeof(char) * (c + d + 1));
	if (!i)
		return (NULL);
	while (a < c)
	{
		i[a] = s1[a];
		a++;
	}
	while (n < d && a < (c + n))
		i[a++] = s2[b++];
	while (n >= d && a < (c + d))
		i[a++] = s2[b++];
	i[a] = '\0';

	return (i);
}
