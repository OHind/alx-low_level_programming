#include "lists.h"

/**
 * free_listint - frees a list_t list
 * @head: head of a linked list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
