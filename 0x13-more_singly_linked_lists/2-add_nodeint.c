#include "lists.h"

/**
 * add_nodeint - Adds a node at the begining of a listint_t.
 * @n: data type pointer of struct
 * @head: data type pointer of the head/next node
 * Return: elements of the str nw_node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw_node;

	new_node = malloc(sizeof(listint_t));
	if (nw_node == NULL)
		return (NULL);

	nw_node->n = n;
	nw_node->next = *head;
	*head = nw_node;

	return (nw_node);
}
