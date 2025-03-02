/**
 * cap_string - function that capitalizes all words of a string
 * @s: string
 *
 * Return: return
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 'a') && (s[i] <= 'z'))
			if (s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t')
				s[i] = (s[i] - 32);
		i++;
	}
	return (s);
}
