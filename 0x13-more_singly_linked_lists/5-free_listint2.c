#include "lists.h"

/**
 * free_listint2 - Frees a linked list of integers and sets the head to NULL
 * @head: A pointer to a pointer to the listint_t list to be freed.
 *
 * Description: This functions iterates through the linked list and frees each
 * node, including the memory allocated for the integer data.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
