#include "lists.h"

/**
 * add_nodeint - This adds a  node at the beginning of the list
 * @head: the heading node within the list
 * @n: data type pointer of the struct
 *
 * Return: the elements of the str
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *mayNode;

	mayNode = malloc(sizeof(listint_t));
	if (mayNode == NULL)
		return (NULL);

	mayNode->n = n;
	mayNode->next = *head;
	*head = mayNode;
	return (mayNode);
}

