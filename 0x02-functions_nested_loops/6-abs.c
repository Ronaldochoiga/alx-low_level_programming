#include "main.h"
/**
 *_abs - main function to give the absolute value of an integer
 *
 *@i:functional parameter and the integteger to be evaluated
 *
 *Return: 0 on success
 *
 **/
int _abs(int i)
{
	if (i > 0 || i == 0)
	{
		return (i);
	}
	else
		return (i * -1);
}
