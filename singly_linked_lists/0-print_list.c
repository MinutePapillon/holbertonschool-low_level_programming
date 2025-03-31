#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nill)\n");
			i++;
			h = h->next;
		}
		printf("[%u] %s\n",h->len, h->str);
		i++;
		h = h->next;
	}
	return(i);
}
