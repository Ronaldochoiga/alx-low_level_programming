#include "lists.h"

/**
 * print_listint - main function
 * @h: linked list and functional parameter
 *
 * Return: node list
 */
size_t print_listint(const listint_t *h)
{
	size_t j = 0;

	while (h)
	{
		printf("%d\n", h->n);
		j++;
		h = h->next;
	}
	return (j);
}
