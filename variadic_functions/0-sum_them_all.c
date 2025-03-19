#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - ..
 * @n: ..
 *
 * Return: return the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int sum = 0, i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
