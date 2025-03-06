#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: counter
 * @argv: array
 *
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	if (argv[1] == NULL || argv[2] == NULL)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", a * b);

	return (0);
}
