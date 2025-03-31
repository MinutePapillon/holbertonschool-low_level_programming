#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head:  pointeur of pointeur
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
		int i = 0;
		list_t *new_node = malloc(sizeof(list_t));

		if (!new_node)
			return (NULL);
		for (; str && str[i]; i++)
			;
		new_node->str = strdup(str);
		new_node->len = i;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
}
