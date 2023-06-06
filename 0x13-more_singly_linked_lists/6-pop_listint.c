#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node node of a list
 * @head: the list to modify
 * Return: integer
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i = 0;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	*head = temp->next;
	i = temp->n;
	free(temp);
	return (i);
}
