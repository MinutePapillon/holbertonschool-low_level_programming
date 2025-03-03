/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointeur
 * @accept: pointeur
 *
 *Return: Returns the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = s;
	unsigned int j;

	for (; *s != '\0'; s++)
	{
		for (; *accept != '\0'; accept++)
		{
			if (*s != *accept)
				j = s
				return (i - j);
		}
	}
}
