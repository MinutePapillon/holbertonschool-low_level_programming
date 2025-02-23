#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Function that computes the absolute value of an integer
 *
 * @n: nombre a tester
 */
void print_to_98(int n)
{
	int a;

	if (n > 98)
		for (a = n; a > 98; a--)
			printf("%d, ", a);
	else
		for (a = n; a < 98; a++)
			printf("%d, ", a);
	printf("98\n");
}

