#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: linked list of type listint_t to print.
 *
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h);

{
	size_t num_of_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num_of_nodes += 1;
		h = h->next;
	}

	return (num_of_nodes);
}
