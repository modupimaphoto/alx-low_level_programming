#include "lists.h"
/**
 * delete_dnodeint_at_index -  deletes the node at index index
 * of a dlistint_t linked list.
 * @head: first node
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		if (current->next)
			current->next->prev = NULL;
		free(current);
		return (1);
	}
	while (index-- > 1 && current)
		current = current->next;

	if (!current || !current->next)
		return (-1);

	current->next->prev = current->prev;
	current->prev->next = current->next;
	free(current);

	return (1);
}
