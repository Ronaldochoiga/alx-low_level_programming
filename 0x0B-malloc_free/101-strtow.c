#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *count_word - main function
 *
 *@s: to be evaluated
 *
 *Return: counted size
 *
 **/
int count_word(char *s)
{
	int i, j, k;

	i = 0;
	k = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == ' ')
			i = 0;
		else if (i == 0)
		{
			i = 1;
			k++;
		}
	}
	return (k);
}
/**
* **strtow - main function
*
*@str: functional parameter for spliting
*
*Return: pointer or Error
*
**/
char **strtow(char *str)
{
	char **m, *t;
	int p, q = 0, r = 0,w, v = 0, s, e;

	while (*(str + r))
		r++;
	w = count_word(str);
	if (w == 0)
		return (NULL);
	m = (char **)malloc(sizeof(char *) * (w + 1));
	if (m == NULL)
		return (NULL);
	for (p = 0; p <= r; p++)
	{
		if (str[p] == ' ' || str[p] == '\0')
		{
			if (v)
			{
				e = p;
				t = (char *)malloc(sizeof(char) * (v + 1));
				if (t == NULL)
					return (NULL);
				while (s < e)
					*t++ = str[s++];
				*t = '\0';
				m[q] = t - v;
				q++;
				v = 0;
			}
		}
		else if (v++ == 0)
			s = p;
	}
	m[q] = NULL;
	return (m);
}
