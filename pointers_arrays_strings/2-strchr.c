/**
 * _strchr - function that locates a character in a string
 * @s: pointeur
 * @c: variable
 *
 * Return: Returns a pointer
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
	return (0);
}

