#include "main.h"

/**
 * print_rev - Write a function that prints a string
 * @s: pointeur
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while ((i  - 1) >= 0)
	{
		_putchar(s[i - 1]);
		i--;
	}
	_putchar('\n');
}

