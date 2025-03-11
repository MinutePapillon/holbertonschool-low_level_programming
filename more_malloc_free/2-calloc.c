#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: elements
 * @size: bytes
 *
 * Return: returns a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;

	if (nmemb == 0 || size == 0)
		return (0);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (0);

	memset(p, 0, nmemb * size);

	return (p);
}
