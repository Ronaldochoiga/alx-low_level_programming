#include "lists.h"

/**
 * free_listint_safe - the function to free a linked list
 * @h: functional parameter
 * Return: num of elements in the free list or zero
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	int j;
	listint_t *k;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		j = *h - (*h)->next;
		if (j > 0)
		{
			k = (*h)->next;
			free(*h);
			*h = k;
			i++;
		}
		else
		{
			free(*h);
			*h = NULL;
			i++;
			break;
		}
	}

	*h = NULL;

	return (i);
}
