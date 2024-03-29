#include "search_algos.h"
/**
 *linear_search - this is the main function that allows a linear search
 *of a string or a numerical character
 *@array: pointer to the first element of the array to search in
 *@size:  number of elements in array
 *@value: the value to search for.
 *Return: first index where the comparison value is located or
 *-1 where the value is not located.
 **/
int linear_search(int *array, size_t size, int value)
{
  size_t i;

  if (array)
    {
      for (i = 0; i < size; i++)
	{
	  printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	  if (array[i] == value)
	    return (i);
	}
    }
  return (-1);
}
