#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end
 * @head:  pointeur of pointeur
 * @n: intger
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
		dlistint_t *new_node = malloc(sizeof(dlistint_t));
		dlistint_t *temp = *head;

		if (!new_node)
			return (NULL);

		new_node->n = n;
		new_node->next = NULL;

		if (*head == NULL)
		{
			*head = new_node;
			return (new_node);
		}
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new_node;
		new_node->prev = temp;

		return (new_node);
}
