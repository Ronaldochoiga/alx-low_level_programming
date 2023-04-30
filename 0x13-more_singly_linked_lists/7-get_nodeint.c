#include "lists.h"

/**
 * get_nodeint_at_index - main function that returns the nth node
 * @head: first node and fp
 * @index: fp of the return node
 *
 * Return: j or null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;
	listint_t *j = head;

	while (j && k < index)
	{
		j = j->next;
		k++;
	}

	return (j ? j : NULL);
}
