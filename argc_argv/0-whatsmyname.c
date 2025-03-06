#include <stdlib.h>
#include <stdio.h>

/**
 * main -Entry point
 * @argc: nombre d'éléments de la ligne de commande
 * @argv: contient ces éléments sous la forme d'un tablea
 *
 * Return: return int
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
