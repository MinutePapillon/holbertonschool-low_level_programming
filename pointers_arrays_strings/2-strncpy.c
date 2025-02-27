#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: pointeur
 * @src: pointeur
 * @n: valeur
 *
 * Return: 
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
