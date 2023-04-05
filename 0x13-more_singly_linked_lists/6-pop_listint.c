#include "lists.h"

/**
 * pop_listint - pop the first value out
 * @head: the list of the file
 * Return: int value (m)
 */
int pop_listint(listint_t **head)
{
	int m = 0;
	listint_t *temp;

	if (*head)
	{
		temp = (*head)->next;
		m = (*head)->n;
		free(*head);
	}
	*head = temp;
	return (m);
}
