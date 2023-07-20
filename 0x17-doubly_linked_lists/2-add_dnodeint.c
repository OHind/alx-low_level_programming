#include<stdlib.h>
#include<stdio.h>
#include "lists.h"
/**
 * add_dnodeint - Add a node
 * @head: the node to add the node to
 * @n: the data to add
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (*head);
	}

	new->next = *head;
	(*head)->prev = new;
	*head = new;
	return (*head);
}
