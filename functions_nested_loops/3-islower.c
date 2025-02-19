#include "main.h"

/**
 * _islower - Function
 *
 * @c: nombre a tester
 * Return: Always 0.
 */
int _islower(int c)
{
	int resultat;

	if (c >= 97 && c <= 122)
	{
		resultat = 1;
	}
	else
	{
		resultat = 0;
	}
	return (resultat);
}
