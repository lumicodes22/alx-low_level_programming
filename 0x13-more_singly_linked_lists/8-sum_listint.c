#include "lists.h"

/**
 * sum_listint - Calculates the total sum of all the data in a listint_t list.
 * @head: Pointer to the first node in the linked list.
 *
 * Return: The resulting sum of all processed data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
