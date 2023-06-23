#include "lists.h"

/**
 * find_listint_loop - looks for loops in lists
 * @head: list evaluated
 * Return: address of node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *i = head;
	listint_t *j = head;

	if (!head)
		return (NULL);

	while (i && j && j->next)
	{
		j = j->next->next;
		i = i->next;
		if (j == i)
		{
			i = head;
			while (i != j)
			{
				i = i->next;
				j = j->next;
			}
			return (j);
		}
	}

	return (NULL);
}