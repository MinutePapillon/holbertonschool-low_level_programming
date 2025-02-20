#include "main.h"

/**
 * _abs - Function that computes the absolute value of an integer
 *
 * @n: nombre a tester
 * Return: return the resultat
 */
int _abs(int n)
{

	int resultat;

	if (n > 0)
	{
		resultat = n;
	}
	else if (n == 0)
	{
		resultat = 0;
	}
	else
	{
		resultat = -(n);
	}
	return (resultat);
}
