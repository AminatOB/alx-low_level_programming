#include "lists.h"

/**
 * pop_listint - pop the first value out
 * @head: the list
 * Return: int value
 */
int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *temp;

	if (*head)
	{
		temp = (*head)->next;
		i = (*head)->n;
		free(*head);
	}
	*head = temp;
	return (i);
}
