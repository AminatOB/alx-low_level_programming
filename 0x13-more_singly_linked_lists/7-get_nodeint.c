#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: the list of the file
 * @index: the node level
 * Return: the node found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;

	while (head)
	{
		if (j++ == index)
			return (head);
		head = head->next;
	}

	return (NULL);
}
