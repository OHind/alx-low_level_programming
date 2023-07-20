#include "lists.h"
/**
 * sum_dlistint - sum of a list
 * @head: The list
 * Return: Sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp)
	{
		sum += temp->n;
	       head = temp->next;
	}
	return (sum);
}
