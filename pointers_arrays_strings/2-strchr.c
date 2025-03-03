/**
 * _strchr - function that locates a character in a string
 * @s: pointeur
 * @c: variable
 *
 * Return: Returns a pointer
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return ('\0');
	else
		return (0);
}

