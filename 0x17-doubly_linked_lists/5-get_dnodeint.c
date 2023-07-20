#include<stdlib.h>
#include<stdio.h>
#include "lists.h"
/**
 * dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
 * @head: the main list
 * @index: The index of the node
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int num = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp)
	{
		if (num == index)
			return (temp);
		temp = temp->next;
		num++;
	}
	return (NULL);
}
