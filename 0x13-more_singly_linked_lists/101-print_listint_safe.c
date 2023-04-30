#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - returns the lenth of linked lists
 * @head: shows the first node or element
 * Return: loops or zero
 *
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *ts, *j;
	size_t ns = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	ts = head->next;
	j = (head->next)->next;

	while (j)
	{
		if (ts == j)
		{
			ts = head;
			while (ts != j)
			{
				ns++;
				ts = ts->next;
				j = j->next;
			}

			ts = ts->next;
			while (ts != j)
			{
				ns++;
				ts = ts->next;
			}

			return (ns);
		}

		ts = ts->next;
		j = (j->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - main function
 * @head: points to the start of nodes
 * Return: number of ns in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t ns, k = 0;

	ns = looped_listint_len(head);

	if (ns == 0)
	{
		for (; head != NULL; ns++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (k = 0; k < ns; k++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (ns);
}
