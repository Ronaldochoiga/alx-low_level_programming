#include "main.h"

/**
 *leet - main function
 *
 *@s: functional parameter
 *
 *Return: always 0
 *
 **/

char *leet(char *s)
{
	int i;
	int j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; a[j] != '\0' ; j++)
		{
			if (s[i] == a[j])
				s[i] = b[j];
		}
	}
	return (s);
}
