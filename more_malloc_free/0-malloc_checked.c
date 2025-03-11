#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: unsigned integers
 *
 * Return: Returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(sizeof(p) * b);

	if (p == NULL)
		return ((int *) 98);

	return (p);
}
