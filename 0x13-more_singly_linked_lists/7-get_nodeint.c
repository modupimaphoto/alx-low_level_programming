#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the first node.
 * @index: the index of the node, starting at 0.
 * Return: the nth node or NULL is the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
