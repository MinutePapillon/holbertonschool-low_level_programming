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
		if (s[i] == (' ' || '\t' || '\n' || ',' || ';' || '.' || '!' || '?' || '"' || '(' || ')' || '{' || '}'))
		{
			i++;
			if ((s[i] >= 'a') && (s[i] <= 'z'))
			{
					s[i] = s[i - 32];
					i++;
			}
			else
				i++;
		}
		else
			i++;
	}
	return (s);
}
