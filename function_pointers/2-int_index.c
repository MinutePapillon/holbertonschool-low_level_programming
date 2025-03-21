#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: size of the array
 * @cmp: pointer to the function you need to use
 *
 * Return: returns the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
