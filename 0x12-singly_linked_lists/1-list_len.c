#include <stdlib.h>
#include "lists.h"

/**
 * list_len - prints the number of elements in a linked list
 * @h: list_t list pointer
 *
 * Return: i
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
