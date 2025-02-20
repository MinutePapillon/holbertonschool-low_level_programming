#include "main.h"

/**
 * print_sign - Function prints the sign of a number
 *
 * @n: nombre a tester
 * Return: return the resultat
 */
int print_sign(int n)
{
	char resultat;

	if (n > 0)
	{
		_putchar('+');
		resultat = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		resultat = 0;
	}
	else
	{
		_putchar('-');
		resultat = -1;
	}
	return (resultat);
}
