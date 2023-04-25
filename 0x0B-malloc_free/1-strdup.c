#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *_strdup - main function
 *
 *@str: functional parameter
 *
 *Return: zero on success
 *
 **/
char *_strdup(char *str)
{
	char *j;
	int k, l = 0;

	if (str == NULL)
		return (NULL);
	k = 0;
	while (str[k] != '\0')
		k++;
	j = malloc(sizeof(char) * (k + 1));
	if (j == NULL)
		return (NULL);
	for (l = 0 ; str[l] ; l++)
		j[l] = str[l];
	return (j);
}
