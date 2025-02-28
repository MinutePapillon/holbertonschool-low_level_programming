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

	do {
	if (s1[i] > s2[i])
		return (s1[i] - s2[i]);
	else if (s1[i] < s2[i])
		return (s1[i] - s2[i]);
	else
		return (0);
	i++;
	} while ((s1[i] == s2[i]) && ((s1[i] != '\0') || (s2[i] != '\0')));
}
