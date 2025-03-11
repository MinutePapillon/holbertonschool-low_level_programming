#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: pointeur
 * @s2: pointeur
 * @n: unsigned int
 *
 * Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
		i = 0;
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
	}

	if (s2 == NULL)
	{
		s2 = "";
		j = 0;
	}
	else
	{
		for (j = 0; s2[j] != '\0'; j++)
			;
	}

	if (n < j)
		p = malloc(sizeof(char) * (i + n + 1));
	else
		p = malloc(sizeof(char) * (i + j + 1));

	if (p == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		p[k] = s1[k];

	if (n < j)
	{
		for (l = 0; l < n; l++)
			p[l + i] = s2[l];
	}
	else
	{
		for (l = 0; l < j; l++)
			p[l + i] = s2[l];
	}

	p[l + i + 1] = '\0';

	return (p);
}
