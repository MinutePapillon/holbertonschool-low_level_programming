/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: pointeur
 * @accept: pointeur
 *
 * Return: Returns a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	char *c = accept;

	for (; *s != '\0'; s++)
	{
		for (accept = c; *accept != '\0'; accept++)
		{
			if (*accept == *s)
				return (s);
		}
	}
	return (0);
}
