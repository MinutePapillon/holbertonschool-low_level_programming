#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: pointeur
 * @s2: pointeur
 *
 * Return: return result
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] == s2[i]) && ((s1[i] != '\0') || (s2[i] != '\0')))
	{
		i++;
	}
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	else
		return (0);
}
