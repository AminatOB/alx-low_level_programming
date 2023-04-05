#include "lists.h"

/**
 * print_listint - to print the elements of a linked list.
 * @h: the linked list of listint_t to print.
 * Return: the mumber of nodes (count).
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
