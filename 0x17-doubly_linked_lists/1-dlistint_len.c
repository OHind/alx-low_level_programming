#include<stdlib.h>
#include<stdio.h>
#include "lists.h"
/**
 * dlistint_len - print the lenght of a linked list
 * @h: the doubly linked list
 * Return: the lenght of a doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;
	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
