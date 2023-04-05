#include "lists.h"

/**
 * add_nodeint_end - To add a node at the begining of a listint_t.
 * @n: data type pointer of struct
 * @head: data type pointer of pointer the head/next node
 * Return: elements of the str maynode
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *maynode, *tmp_node;

	maynode = malloc(sizeof(listint_t));
	if (maynode == NULL)
		return (NULL);

	maynode->n = n;
	maynode->next = NULL;
	if (*head == NULL)
	{
		*head = maynode;
	}
	else
	{
		tmp_node = *head;
		while (tmp_node->next != NULL)
			tmp_node = tmp_node->next;
		tmp_node->next = maynode;
	}
	return (maynode);
}
