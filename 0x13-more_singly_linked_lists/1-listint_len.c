#include "lists.h"

/**
 * print_list - prints all the elements pf a list_t list
 * 
 * @h: pointer to the head of the list.
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t nofnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nofnodes++;
	}
	return (nofnodes);
}
