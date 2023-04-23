#include "main.h"

/**
 * _isalpha - main function
 * @c: character as the functional parameter
 * Return: 1 or 0
 *
 **/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
