#include "lists.h"

/**
 * add_nodeint - main function
 * @head: node 1 pointer
 * @n: input data
 * Return: i in the the new space
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *i;

	i = malloc(sizeof(listint_t));
	if (!i)
		return (NULL);

	i->n = n;
	i->next = *head;
	*head = i;

	return (i);
}
