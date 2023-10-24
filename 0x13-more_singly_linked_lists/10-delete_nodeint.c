#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a
 * listint_t linked list.
 *
 * @head: pointer to the head.
 * @index: he index of the node that should be deleted.
 * Index starts at 0
 *
 * Return: 1 for success or -1 for failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *currentNode, *nextNode;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		nextNode = (*head)->next;
		free(*head);
		*head = nextNode;
		return (1);
	}
	currentNode = *head;
	while (currentNode != NULL && i < index - 1)
	{
		currentNode = currentNode->next;
		i++;
	}
	if (currentNode == NULL || currentNode->next == NULL)
	{
		return (-1);
	}

	nextNode = currentNode->next->next;
	free(currentNode->next);
	currentNode->next = nextNode;

	return (1);
}
