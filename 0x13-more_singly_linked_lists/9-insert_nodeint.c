#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node in a given position.
 * @head: data type pointer the head/next node
 * @idx: data type unsigned int index
 * @n: data type int
 * Return: newnode
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp_node, *newnode;
	unsigned int counter = 0;

	if (head == NULL && *head == NULL)
		return (NULL);

	tmp_node = *head;
	if (idx == 0)
	{
		newnode = malloc(sizeof(listint_t));

		if (newnode == 0)
			return (NULL);
		newnode->n = n;
		newnode->next = tmp_node;
		*head = newnode;
		return (newnode);
	}
	while (tmp_node)
	{
		if (counter + 1 == idx)
		{
			newnode = malloc(sizeof(listint_t));

			if (newnode == 0)
				return (NULL);
			newnode->n = n;
			newnode->next = tmp_node->next;
			tmp_node->next = newnode;
			return (newnode);
		}
		tmp_node = tmp_node->next;
		counter++;
	}
	return (NULL);
}
