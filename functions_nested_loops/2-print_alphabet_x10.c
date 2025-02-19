#include "main.h"

/**
 * print_alphabet_x10 - Function
 *
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	char t;

		for (t = 97; t <= 122; t++)
		{
			_putchar(t);
		}
	_putchar('\n');
	}
}
