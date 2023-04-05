#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a
 *listint_t: linked list.
 * @head: the list to work on
 * Return: mat
 */
int sum_listint(listint_t *head)
{
	int mat = 0;

	while (head)
	{
		mat += head->n;
		head = head->next;
	}

	return (mat);
}
