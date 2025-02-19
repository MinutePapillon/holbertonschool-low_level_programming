#include "main.h"

/**
 * print_alphabet - function
 *Return: 0 on sucess
 */
void print_alphabet(void)
{
	char i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
