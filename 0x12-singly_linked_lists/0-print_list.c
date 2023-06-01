#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - Print a list
 * @h: The list to be printed
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] (nil)\n", 0);
		i++;
		h = h->next;
	}
	return (i);
}
