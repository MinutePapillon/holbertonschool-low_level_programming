#include "main.h"

/**
 * print_triangle - a function that draws triangle
 * @size: An input integer
 * Return: Always 0
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j--)
				_putchar(' ');
			for (k = 0; k < size; k++)
				_putchar(35);
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
