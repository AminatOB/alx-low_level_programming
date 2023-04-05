#include "lists.h"

/**
 * listint_len - Return the number of elements in a linked listint_t list
 * @h: data type pointer othe struct
 * Return: elements of the str a
 */
size_t listint_len(const listint_t *h)
{
	unsigned int a = 0;
	const listint_t *new_node = h;

	for (; new_node; new_node = new_node->next)
		a++;
	return (a);
}
