#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

/**
 * main - Entry point
 * @argc: .
 * @argv: ..
 * Return: return result
 */
int main(int argc, char *argv[])
{
	int (*opfuntion)(int, int), a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	opfuntion = get_op_func(argv[2]);

	if (!opfuntion)
	{
		printf("Error\n");
		exit(99);
	}
	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", opfuntion(a, b));
	return (0);
}
