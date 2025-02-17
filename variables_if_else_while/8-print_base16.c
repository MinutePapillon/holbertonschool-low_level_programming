#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char i = 48;
	char l = 97;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	while (l <= 102)
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);

}
