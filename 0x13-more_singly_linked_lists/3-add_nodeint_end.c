#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the begining of a listint_t.
 * @n: data type pointer of struct
 * @head: data type pointer of pointer the head/next node
 * Return: elements of the str nw_node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw_node, *tmp_node;

	nw_node = malloc(sizeof(listint_t));
	if (nw_node == NULL)
		return (NULL);

	nw_node->n = n;
	nw_node->next = NULL;
	if (*head == NULL)
	{
		*head = nw_node;
	}
	else
	{
		tmp_node = *head;
		while (tmp_node->next != NULL)
			tmp_node = tmp_node->next;
		tmp_node->next = nw_node;
	}
	return (nw_node);
}
