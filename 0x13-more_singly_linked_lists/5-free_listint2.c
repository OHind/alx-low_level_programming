#include "lists.h"

/**
 * free_listint2 - frees a list_t list
 * @head: head of a linked list
 * Return: void
 */

void free_list(list_t **head)
{
	list_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		temp = head->next;
		free
		free(head);
		head = temp;
	}
}
