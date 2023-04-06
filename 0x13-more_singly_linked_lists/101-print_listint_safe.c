#include "lists.h"

/**
 * print_listint_safe - A function that prints a safe linked listint.
 * @head: data type double pointer the head/next node
 * Return: num of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp_n = NULL;
	const listint_t *l_n = NULL;
	size_t counter = 0;
	size_t enode;

	tmp_n = head;
	while (tmp_n)
	{
		printf("[%p] %d\n", (void *)tmp_n, tmp_n->n);
		counter++;
		tmp_n = tmp_n->next;
		l_n = head;
		enode = 0;
		while (enode < counter)
		{
			if (tmp_n == l_n)
			{
				printf("-> [%p] %d\n", (void *)tmp_n, tmp_n->n);
				return (counter);
			}
			l_n = l_n->next;
			enode++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}

