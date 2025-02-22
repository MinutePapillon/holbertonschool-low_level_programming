#include "main.h"

/**
 * print_to_98 - Function that computes the absolute value of an integer
 *
 * @n: nombre a tester
 * Return: return the resultat
 */
void print_to_98(int n)
{
	if (n < 0)
	{
		while (n <= 98)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	else if (n == 98)
	{
	}
	else
	{
	}
}
