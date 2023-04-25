#include "main.h"
#include <stdlib.h>
/**
 *str_concat - main function
 *
 *@s1: functional parameter(one string)
 *
 *@s2: second string
 *
 *Return: joined strings
 *
 **/
char *str_concat(char *s1, char *s2)
{
	char *j;
	int k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	k = l = 0;
	while (s1[k] != '\0')
		k++;
	while (s2[l] != '\0')
		l++;
	j = malloc(sizeof(char) * (k + l + 1));
	if (j == NULL)
		return (NULL);
	k = l = 0;
	while (s1[k] != '\0')
	{
		j[k] = s1[k];
		k++;
	}
	while (s2[l] != '\0')
	{
		j[k] = s2[l];
		k++, l++;
	}
	j[k] = '\0';
	return (j);
}
