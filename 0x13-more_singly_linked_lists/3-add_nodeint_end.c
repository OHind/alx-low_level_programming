#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a node at the end
 * @head: address of the head
 * @n: int to add at the beginning of the list
 * Return: a modified list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *list_new;
	listint_t *list_temp;

	list_temp = *head;
	list_new = malloc(sizeof(listint_t));
	if (list_new == NULL)
	{
		return (NULL);
	}
	list_new->n = n;
	list_new->next = NULL;
	if (*head == NULL)
	{
		*head = list_new;
		return (list_new);
	}
	while (list_temp->next != NULL)
	{
		list_temp = list_temp->next;
	}
	list_temp->next = list_new;
	return (list_new);
}
