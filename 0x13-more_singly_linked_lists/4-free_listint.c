#include "lists.h"

/**
 * free_listint - frees a linked list of integers.
 * @head: pointer to the first node of the list.
 *
 * Description: This function iterates through the linked list and
 * each node, including the memory allocated for the integer data.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
