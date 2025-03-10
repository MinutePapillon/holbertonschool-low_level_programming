#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int i, j, k, l;
	

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	c = malloc(sizeof(char) * (i + j + 1));

	if (c == NULL)
		return (NULL);

	for (k = 0; k <= i; k++)
		c[k] = s1[k];

	for (l = 0; l <= j; l++)
		c[l + i] = s2[l];

	c[i + j + 1] = '\0';

	return (c);
}
