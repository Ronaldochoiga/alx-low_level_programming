#include "lists.h"

/**
 * listint_len - prints the length of a linked list
 * @h: fp
 *
 * Return: i as the size
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
