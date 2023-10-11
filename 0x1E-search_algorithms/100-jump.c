#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array
 * @array: Pointer to the first elem
 * @size: Number of elements in the given array
 * @value: Value to search for in the array
 * Return: index to the location of the value, -1 if absent
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, stp;

	if (array == NULL || size == 0)
		return (-1);
	stp = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += stp;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);
	if (jump >= size)
		jump = size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	return (array[i] == value ? (int)i : -1);
}
