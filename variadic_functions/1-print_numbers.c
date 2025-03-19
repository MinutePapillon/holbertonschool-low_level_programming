#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - ..
 * @separator: ..
 * @n: ..
 *
 * Return: return the sum
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;

	if (separator == NULL)
		exit(0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, unsigned int));
		if (i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
