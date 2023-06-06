#include "lists.h"
#include <stdio.h>
/**
 * listint_len - lenght of a singly linked list
 * @h: the linked list
 * Return: the sise of the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
