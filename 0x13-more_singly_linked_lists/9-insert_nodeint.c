 

#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node in a given position.
 * @head: data type pointer the head/next node
 * @idx: data type unsigned int index
 * @n: data type int
 * Return: nw_node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp_node, *nw_node;
	unsigned int counter = 0;

	if (head == NULL && *head == NULL)
		return (NULL);

	tmp_node = *head;
	if (idx == 0)
	{
		nw_node = malloc(sizeof(listint_t));

		if (nw_node == 0)
			return (NULL);
		nw_node->n = n;
		nw_node->next = tmp_node;
		*head = nw_node;
		return (nw_node);
	}
	while (tmp_node)
	{
		if (counter + 1 == idx)
		{
			nw_node = malloc(sizeof(listint_t));

			if (nw_node == 0)
				return (NULL);
			nw_node->n = n;
			nw_node->next = tmp_node->next;
			tmp_node->next = nw_node;
			return (nw_node);
		}
		tmp_node = tmp_node->next;
		counter++;
	}
	return (NULL);
}
