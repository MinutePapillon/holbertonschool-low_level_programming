/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointeur
 * @accept: pointeur
 *
 *Return: Returns the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != s[i])
		{
			if (accept[j] == '\0')
				return (i);
			j++;
		}
	i++;
	}
	return (i);
}
