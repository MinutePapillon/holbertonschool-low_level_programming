#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - function that executes a function
 * @array : ..
 * @size: size of the array
 * @action: pointer to the function you need to use
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
		size_t i;

		for (i = 0; i < size; i++)
			action(array[i]);
}
