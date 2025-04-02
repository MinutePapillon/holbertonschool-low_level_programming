#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: pointeur
 * @index: number of the node
 *
 * Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		if (i == index)
			return (temp);
		i++;
		temp = temp->next;
	}
	return (NULL);
}
