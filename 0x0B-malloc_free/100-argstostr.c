#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *argstostr - main function
 *
 *@ac: functional parameter
 *
 *@av: functional parameter
 *
 *Return: zero
 *
 **/
char *argstostr(int ac, char **av)
{
	int j, k, l = 0, m = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k]; k++)
			m++;
	}
	m += ac;
	s = malloc(sizeof(char) * m + 1);
	if (s == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k]; k++)
		{
			s[l] = av[j][k];
			l++;
		}
		if (s[l] == '\0')
		{
			s[l++] = '\n';
		}
	}
	return (s);
}
