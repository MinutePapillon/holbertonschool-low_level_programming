#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: pointeur
 *
 * Return: return the length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * puts_half - function that prints half of a string, followed by a new line
 * @str: pointeur
 *
 */
void puts_half(char *str)
{
	int i = _strlen(str);

	if ((i % 2) != 0)
		i = (i + 1) / 2;
	else
		i = i / 2;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
