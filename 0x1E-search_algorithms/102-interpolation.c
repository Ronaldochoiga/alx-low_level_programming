#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array to be searched in
 * @value: Value to search for in the given array
 * Return: index location of value, -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t a, b, y;

	if (array == NULL)
		return (-1);
	for (b = 0, y = size - 1; y >= b;)
	{
		a = b + (((double)(y - b) / (array[y] - array[b])) *
			 (value - array[b]));
		if (a < size)
			printf("Value checked array[%ld] = [%d]\n", a,
			       array[a]);
		else
		{
			printf("Value checked array[%ld] as out of range\n", a);
			break;
		}
		if (array[a] == value)
			return (a);
		if (array[a] > value)
			y = a - 1;
		else
			b = a + 1;
	}
	return (-1);
}
