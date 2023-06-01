#include "lists.h"
#include <stdlib.h>

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
 * add_node - adds a node at the end
 * @head: address of the head
 * @str: string to add at the beginning of the list
 * Return: a modified list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *list_new;
	int len = 0;
	char *s;

	list_new = malloc(sizeof(list_t));
	if (list_new == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		s = NULL;
		len = 0;
	}
	else
	{
		s = strdup(str);
		len = _strlen(str);
	}
	list_new->len = len;
	list_new->str = s;
	list_new->next = *head;
	return (*head);
}
