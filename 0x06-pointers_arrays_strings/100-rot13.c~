#include "main.h"

/**
 *rot13 - main function
 *
 *@s: function parameter
 *
 *Return: always 0
 *
 **/
char *rot13(char *s)
{
	int i;
	int j;

	char *a = "ABCDEFGHIJKLM";
	char *b = "NOPQRSTUVWXYZ";

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
