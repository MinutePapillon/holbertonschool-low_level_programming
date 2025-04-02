#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data
 * @head: pointeur
 *
 * Return: if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0, sum = 0;
	dlistint_t *temp = head;

	if (temp == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp;
		temp = temp->next;
	}
	return (sum);
}
