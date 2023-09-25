#include "lists.h"

/**
 * print_listint - Prints all elements of linked lists
 * @h: The linked lists of listint_t to print
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)

{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
