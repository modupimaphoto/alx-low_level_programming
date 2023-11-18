#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: first node
 * @index: the index of the node
 * Return: the nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (index == 0)
			return (current);
		index--;
		current = current->next;
	}

	return (NULL);
}
