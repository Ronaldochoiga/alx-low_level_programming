#include "main.h"

int check_pal(char *s, int i, int j);
int _strlen_recursion(char *s);

/**
 * is_palindrome - check whether palidrome
 * @s: fp
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - main function that checks string length
 * @s: length owner
 *
 * Return: str length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - main function to check palindrome in recurse manner
 * @s: to be evaluated
 * @i: iterating number
 * @j: string length
 *
 * Return: 1 or 0
 */
int check_pal(char *s, int i, int j)
{
	if (*(s + i) != *(s + j - 1))
		return (0);
	if (i >= j)
		return (1);
	return (check_pal(s, i + 1, j - 1));
}
