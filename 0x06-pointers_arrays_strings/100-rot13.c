#include "main.h"

/**
 *rot13 - main function
 *
 *@r: function parameter
 *
 *Return: always 0
 *
 **/
char *rot13(char *r)
{
	int i;
	int j;

	char *a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *b = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0 ; r[i] != '\0' ; i++)
	{
		for (j = 0 ; a[j] != '\0' ; j++)
		{
			if (r[i] == a[j])
			{
				r[i] = b[j];
				break;
			}
		}
	}
	return (r);
}
