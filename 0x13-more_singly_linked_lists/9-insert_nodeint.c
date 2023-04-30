#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at a given pos
 * @head: first node
 * @idx: pos of insertion
 * @n: insertion data
 *
 * Return: n ornull
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *nw;
	listint_t *j = *head;

	nw = malloc(sizeof(listint_t));
	if (!nw || !head)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	if (idx == 0)
	{
		nw->next = *head;
		*head = nw;
		return (nw);
	}

	for (i = 0; j && i < idx; i++)
	{
		if (i == idx - 1)
		{
			nw->next = j->next;
			j->next = nw;
			return (nw);
		}
		else
			j = j->next;
	}

	return (NULL);
}
