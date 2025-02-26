#include "main.h"

/**
 * _strcpy - function that copies the string
 * @dest: pointeur
 * @src: pointeur
 *
 * Return: retourne la valeur d'origine
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
