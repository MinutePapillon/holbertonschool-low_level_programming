#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9
 *
 * Return: always 0
 */
void print_numbers(void)
{
	char a;

	for (a = 48; a <= 57; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
