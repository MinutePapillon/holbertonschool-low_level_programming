/**
 * string_toupper - function that changes all lowercase letters
 * @array: array
 *
 * Return: char
 */
char *string_toupper(char *array)
{
	int i = 0;

	while (array[i] != '\0')
	{
		if ((array[i] >= 'a') && (array[i] <= 'z'))
			array[i] = (array[i] - 32);
		i++;
	}
	return (array);
}
