#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - sum
 * @a: one
 * @b: two
 * Return: summation
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtraction
 * @a: one
 * @b: two
 * Return: subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication
 * @a: one
 * @b: two
 * Return: answer after multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide
 * @a: num1
 * @b: num 1
 * Return: results of division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remaider
 * @a: num1
 * @b: num2
 * Return: division 1
 */
int op_mod(int a, int b)
{
	return (a % b);
}
