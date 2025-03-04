#include <stdio.h>

/**
 * print_diagsums - function that prints the sum
 * @a: pointeur
 * @size: variable
 * 
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i = 0;
	int *p1 = a, *p2 = (a + (size - 1));

	while (i < size)
	{
		sum1 += *p1;
		sum2 += *p2;
		p1 += (size + 1);
		p2 += (size - 1);
		i++;
	}
	printf("%d ,", sum1);
	printf("%d\n", sum2);
}

