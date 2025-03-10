#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: character
 *
 * Return: always 0
 */
 char *create_array(unsigned int size, char c)
{
	char *array;

	array = (char*)malloc(size * sizeof(char));
	*array = c;

	if (array == NULL || size == 0)
		return (NULL);
	else
		return (array);
	free(array);
}
