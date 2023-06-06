#include "lists.h"
#include "stdlib.h"
/**
 * add_nodeint - adds a node at the end
 * @head: address of the head
 * @n: string to add at the beginning of the list
 * Return: a modified list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *list_new;

	list_new = malloc(sizeof(listint_t));
	if (list_new == NULL)
	{
		return (NULL);
	}
	list_new->n = n;
	list_new->next = *head;
	*head = list_new;
	return (list_new);
}
