/**
 * _memcpy - function that copies memory area
 * @dest: destiantion files
 * @src: origin files
 * @n: n bytes copy
 *
 * Return: Returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
