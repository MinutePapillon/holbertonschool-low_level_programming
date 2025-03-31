#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	int i = 0;

	if (h == NULL)
		printf("[0] (nill)");

	while (h != NULL)
	{
		printf("%s", *h);
		i++;
	}
	return(i);
}
