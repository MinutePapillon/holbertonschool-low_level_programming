#include <stdio.h>

/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c: character to test
 *
 * Return: 1 if c is digit else 0
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}

