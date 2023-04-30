#include "lists.h"

/**
 * sum_listint - gives all the sum of a list
 * @head: functional parameter  pointing first node
 * Return: sum of the nodes
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *i = head;

	while (i)
	{
		s += i->n;
		i = i->next;
	}

	return (s);
}
