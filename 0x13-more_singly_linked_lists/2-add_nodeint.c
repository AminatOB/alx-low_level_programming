#include "lists.h"

/**
 * add_nodeint_end - To add a node at the begining of a listint_t.
 * @n: data type pointer of the struct.
 * @head: data type pointer of the pointer head/next node.
 * Return: elements of the str may_node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *may_node, *tmp_node;

	may_node = malloc(sizeof(listint_t));
	if (may_node == NULL)
		return (NULL);

	may_node->n = n;
	may_node->next = NULL;
	if (*head == NULL)
	{
		*head = may_node;
	}
	else
	{
		tmp_node = *head;
		while (tmp_node->next != NULL)
			tmp_node = tmp_node->next;
		tmp_node->next = may_node;
	}
	return (may_node);
}
