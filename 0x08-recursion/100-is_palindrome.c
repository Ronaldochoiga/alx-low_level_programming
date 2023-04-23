#include "main.h"
int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 *find_strlen - determines length of the string
 *
 *@s: functional parameter string
 *
 *Return: number of characters
 *
 **/
int find_strlen(char *s)
{
	int l = 0;

	if (*(s + l))
	{
		l++;
		l += find_strlen(s + l);
	}
	return (l);
}
