#include "main.h"

/**
 * print_last_digit - Function prints the last digit of a number
 *
 * @n: nombre a tester
 * Return: always 0
 */
int print_last_digit(int n)
{
	int c;

	if (n < 0)
		c = -1 * n % 10;
	else
		c = n % 10;

	_putchar(c + '0');
	return (c);
}
