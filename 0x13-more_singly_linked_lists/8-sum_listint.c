#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a
 *listint_t linked list.
 * @head: the list to ork on
 * Return: sam
 */
int sum_listint(listint_t *head)
{
	int sam = 0;

	while (head)
	{
		sam += head->n;
		head = head->next;
	}

	return (sam);
}
