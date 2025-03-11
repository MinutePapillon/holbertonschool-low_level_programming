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
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n > j)
		n = j;

	p = malloc(sizeof(char) * (i + n + 1));

	if (p == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		p[k] = s1[k];

	for (l = 0; l < n; l++)
		p[k + l] = s2[l];

	p[l + k] = '\0';

	return (p);
}
