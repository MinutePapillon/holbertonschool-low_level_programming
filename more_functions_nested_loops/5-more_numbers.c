#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 * Return: always 0
 */
void more_numbers(void)
{
	int counter, num;

	for (counter = 0; counter < 10; counter++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}

	_putchar('\n');
	}
}
