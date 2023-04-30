#include "lists.h"

/**
 * delete_nodeint_at_index - positioned deletion of a linked list
 * @head: first elementin linked list
 * @index: node to be deleted
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *j = *head;
	listint_t *av = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(j);
		return (1);
	}

	while (i < index - 1)
	{
		if (!j || !(j->next))
			return (-1);
		j = j->next;
		i++;
	}


	av = j->next;
	j->next = av->next;
	free(av);

	return (1);
}
