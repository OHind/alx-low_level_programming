#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - Print a list of integers
 * @h: The list to be printed
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
