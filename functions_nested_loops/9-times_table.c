#include "main.h"

/**
 * times_table - Function that prints the 9 times table
 *
 * Return: always 0
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (b = 1; b <= 9; b++)
		{
			int c = a * b;

			if ((c / 10) == 0)
				_putchar(' ');
			else
				_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
