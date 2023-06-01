#include "lists.h"
#include <stdlib.h>
/**
 * list_len - lenght of a list
 * @h: the list
 * Return: teh number of element in the list
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
