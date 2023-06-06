#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: head of the linked list
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *n;

	sum = 0;
	if (head == NULL)
		return (sum);
	n = head;
	while (n != NULL)
	{
		sum += n->n;
		n = n->next;
	}
	return (sum);
}
