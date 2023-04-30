#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - iterates an arry of chars
 * @array: array to be iterated
 * @size: num of elements to print
 * @action: fp
 * Return: null
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
