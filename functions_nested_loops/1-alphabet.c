#include "main.h"
/**
 * void print_alphabet - function that prints the alphabet, in lowercase, followed by a new line
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
