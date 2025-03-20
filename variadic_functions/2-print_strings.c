#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - ..
 * @separator: ..
 * @n: ..
 *
 * Return: return the sum
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		char *p = va_arg(ap, char*);

		if (p == NULL)
			printf("(nil)");
		else
			printf("%s", p);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
