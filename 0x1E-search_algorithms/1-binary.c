#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int binary_help(int *array, int value, size_t low, size_t high);
void print_array(int *array, size_t low, size_t high);
/**
 * binary_search - function that searcges for a value in a sorted array
 * @array: pointer to element 1
 * @size: no of elems inj the array to search in
 * @value: the actual value to be searched for
 * Return: index of the value found or -1 if the value is not found hence null
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);
	return (binary_help(array, value, 0, size - 1));
}

/**
 * binary_help - search for value in an array in sorted format
 * @array: pointer rto element 1
 * @value: actual value to be searched for
 * @low: lesser index value
 * @high: upper index value
 * Return: index of the value location or -1 for the null or unavaillable
 */
int binary_help(int *array, int value, size_t low, size_t high)
{
	size_t m;

	print_array(array, low, high);
	if (high == low && array[low] != value)
		return (-1);
	m = ((high - low) / 2) + low;
	if (array[m] == value)
		return (m);
	if (array[m] < value)
		return (binary_help(array, value, m + 1, high));
	if (array[m] > value)
		return (binary_help(array, value, low, m - 1));
	return (-1);
}

/**
 * print_array - prints an array passed as parameter
 * @array: Pointer to the first elem
 * @low: lesser index value
 * @high: upper index value
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i = low;

	printf("Searching in array: ");
	while (i <= high)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
		i++;
	}
	printf("\n");
}
