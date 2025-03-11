#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: min value
 * @max: max value
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, *p;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
		p[i] = (min + i);

	return (p);
}
