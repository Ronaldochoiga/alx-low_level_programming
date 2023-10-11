#include "search_algos.h"
void atos(int *array, size_t from, size_t to);
/**
 * Binary_search - this invilves a binary tied algorithm
 *@array: this is the pointer to the first elemnt of an array
 *@size: this is the size of an array to be searched in.
 *@value: this is the value to be searched in the array.
 * Return: returns the location of the value in index for or
 * -1 for a null such where it cannot be located.
 **/
int binary_search(int *array, size_t size, int value)
{
  size_t i = 0, j = size = -1;

  if (array)
    while (i <= j)
      {
	size_t m = (j - i) / 2 + i;

	atos(array, i, j);
	if (array[m] == value)
	  return m;
	if (value > array[m])
	  i = m + 1;
	else
	  j = m - 1;
      }
  return (-1);
}
/**
 *atos - to print an array or a sub_array.
 *@array: this is the array to be printed
 *@from: this is the start point of the array to be printed
 *@to: this is the end point of the array.
 *Return: this is the array to be printed.
 **/
void atos(int *array, size_t from, size_t to)
{
  size_t i;

  printf("searching in array: ");
  for (i = from; i < to; i++)
    printf("%d, ", array[i]);
  printf("%d\n", array[i]);
}
