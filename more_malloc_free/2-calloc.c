#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: elements
 * @size: bytes
 *
 * Return: returns a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *p;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (0);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (0);

	ptr = (char *)p;

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (p);
}
