#include "lists.h"

/**
 * reverse_listint - A function that reverses the listint.
 * @head: data type double pointer of the head/next node
 * Return: naynode
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old_node = NULL;
	listint_t *naynode;

	while (head && *head)
	{
		naynode = (*head)->next;
		(*head)->next = old_node;
		old_node = *head;
		*head = naynode;
	}
	*head = old_node;
	return (*head);
}

