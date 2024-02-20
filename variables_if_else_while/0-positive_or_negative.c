#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n>0)
	{
		printf("%n is positive\n", n);
	}
	else if (n==0)
	{
		printf("%n is zero\n", n);
	}
	else
        {
                printf("%n is negative\n", n)
        }

	return (0);
}
