#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - Print a list
 * h: The list to be printed
 * Retuen: The number of nodes
 */
size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] (nil)", 0);
		h = h->next;
	}
	return (i);
}
