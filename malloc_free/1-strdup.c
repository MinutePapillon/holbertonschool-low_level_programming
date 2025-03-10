#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: pointeur
 *
 * Return: Returns NULL if str = NULL
 * returns a pointer to the duplicated string
 * returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char * c;
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;

	c = malloc(sizeof(char) * (i + 1));
	
	if (str == NULL)
		return (NULL);

	for (j = 0; j < (i + 1); j++)
		c[j] = str[j];

	return (c);
}
