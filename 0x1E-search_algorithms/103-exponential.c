#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void print_array(int *array, size_t low, size_t high);
int binary_help(int *array, int value, size_t low, size_t high);
/**
 * exponential_search - searches for a value in a sorted array
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array given
 * @value: Value to search for in the given array
 * Return: index of value, -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, b, x;

	if (!array || size == 0)
		return (-1);
	b = 1;
	i = 1;
	while (b < size)
	{
		if (value < array[b])
			break;
		printf("Value checked array[%lu] = [%d]\n", b, array[b]);
		i = b;
		b = b * 2;
	}
	x = b < size - 1 ? b : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", i, x);
	return (binary_help(array, value, b / 2, x));
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
