#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head:  pointeur of pointeur
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
		int i = 0;
		list_t *new_node = malloc(sizeof(list_t));
		list_t *temp = *head;

		if (!new_node)
			return (NULL);

		for (; str && str[i]; i++)
			;
		new_node->str = strdup(str);
		if (!new_node->str)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = i;
		new_node->next = NULL;

		if (*head == NULL)
		{
			*head = new_node;
			return (new_node);
		}
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new_node;

		return (new_node);
}
