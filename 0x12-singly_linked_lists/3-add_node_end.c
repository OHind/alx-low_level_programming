#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - returns length of string
 * @s: string
 * Return: length of string
 */

int _strlen(const char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * add_node_end - adds a node at the end
 * @head: address of the head
 * @str: string to add at the beginning of the list
 * Return: a modified list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *list_new;
	char *s;
	list_t *list_temp;

	list_temp = *head;
	list_new = malloc(sizeof(list_t));
	if (list_new == NULL)
	{
		return (NULL);
	}
	s = strdup(str);
	if (s == NULL)
	{
		free(list_new);
		return (NULL);
	}
	list_new->len = _strlen(str);
	list_new->str = s;
	list_new->next = NULL;
	if (*head == NULL)
	{
		*head = list_new;
		return (list_new);
	}
	while (list_temp->next != NULL)
	{
		list_temp = list_temp->next;
	}
	list_temp->next = list_new;
	return (list_new);
}
