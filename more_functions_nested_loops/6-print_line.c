#include "main.h"

/**
 * print_line - function that draws a straight line in the termina
 * @n: the number of times the character _ should be printed
 *
 * Return: always 0
 */
void print_line(int n)
{
	int counter;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (counter = 0; counter < n; counter++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
}
