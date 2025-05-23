#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointeur
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			i++;
			h = h->next;
		}
		printf("[%u] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
