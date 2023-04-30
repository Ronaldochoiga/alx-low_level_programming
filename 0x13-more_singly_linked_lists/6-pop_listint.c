#include "lists.h"

/**
 * pop_listint - main function
 * @head: points the first element in thw list
 *
 * Return: null or i
 */
int pop_listint(listint_t **head)
{
	listint_t *j;
	int i;

	if (!head || !*head)
		return (0);

	i = (*head)->n;
	j = (*head)->next;
	free(*head);
	*head = j;

	return (i);
}
