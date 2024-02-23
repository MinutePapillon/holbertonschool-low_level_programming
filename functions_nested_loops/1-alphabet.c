#include "main.h"
/**
 * print_alphabet - function that prints the alphabet
 *
 * Return: Always (Success)
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar ('\n');
}
