/**
 * _memset - function that fills memory with a constant byte
 * @s: pointeur
 * @b: variable
 * @n: variable
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
