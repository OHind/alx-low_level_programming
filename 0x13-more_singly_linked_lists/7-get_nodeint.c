#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - get node at index
 * @head: list to verify
 * @index: of the value to return
 * Return: node of linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *h;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	h = head;
	while (h != NULL)
	{
		if (i == index)
			return (h);
		h = h->next;
		i++;
	}
	return (NULL);
}
