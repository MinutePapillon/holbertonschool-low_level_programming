/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: pointeur
 * @n: pointeur
 *
 * Return: return
 */
void reverse_array(int *a, int n)
{
	int i, t = 0;

	for (i = 0; i < (n / 2); i++)
	{
		t = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = t;
	}
}
