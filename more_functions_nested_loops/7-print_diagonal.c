#include "main.h"

/**
 * print_diagonal - prints diagonal
 * @n: the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int i = 1;
	int j;

	while (i <=  n)
	{ 
		_putchar(32);
		j++;
		_putchar(92);
		i++;
		_putchar('\n');
	}
	_putchar('\n');
}
