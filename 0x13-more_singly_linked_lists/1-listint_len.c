#include "lists.h"

/**
 * listint_len - Return the number of elements
 * @h: data type pointer of struct
 * Return: elements of the str n
 */
size_t listint_len(const listint_t *h)
{
	unsigned int n = 0;
	const listint_t *new_node = h;

	for (; new_node; new_node = new_node->next)
		n++;
	return (n);
}
