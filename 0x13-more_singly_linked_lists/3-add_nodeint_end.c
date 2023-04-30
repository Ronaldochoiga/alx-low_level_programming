#include "lists.h"

/**
 * add_nodeint_end - node add at the end of the node
 * @head: pointer to element1 in strings
 * @n: data to be inserted
 * Return: i or null if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i;
	listint_t *j = *head;

	i = malloc(sizeof(listint_t));
	if (!i)
		return (NULL);

	i->n = n;
	i->next = NULL;

	if (*head == NULL)
	{
		*head = i;
		return (i);
	}

	while (j->next)
		j = j->next;

	j->next = i;

	return (i);
}
