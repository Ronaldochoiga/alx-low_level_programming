#include "main.h"

/**
 *main - main function
 *positive_or_negative - checks positive or negative
 *@i: parameter of the function
 *Return: always 0
 **/
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive", i);
}
