#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char l = 97;

	while (l <= 122)
	{
		if (l == 101 || l == 113)
		{
			l++;
		}
		else
		{
			putchar(l);
			l++;
		}
	}
	putchar('\n');
	return (0);

}
