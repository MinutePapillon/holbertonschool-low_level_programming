#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: pointeur
 *
 * Return: return the length of string
 */
int _strlen(char *s)
{
        int i = 0;

        while (s[i] != '\0')
        {
                i++;
        }
        return (i);
}
/**
 * rev_string - function that reverses a string
 * @s: pointeur
 *
 */
void rev_string(char *s)
{
	int l = 0;
	int r = _strlen(s) - 1;
	char t;

	while (l < r) 
	{
	t = s[l];
	s[l] = s[r];
	s[r] = t;
	l++;
	r--;
	}
}
