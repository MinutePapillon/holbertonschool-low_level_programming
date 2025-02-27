#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: pointeur
 * @src: pointeur
 * @n: lenght
 *
 * Return: Return a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
		int i = 0;
		int j = 0;

		while (dest[i] != '\0')
		{
			i++;
		}

		while (j < n)
		{
			dest[i + j] = src[j];
			j++;
		}
		dest[i + j] = '\0';
		return (dest);
}
