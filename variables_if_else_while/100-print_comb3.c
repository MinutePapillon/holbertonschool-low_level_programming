#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	unsigned char i = '0';
	unsigned char u = i + 1;

	while (i < '9')
	{
	while (u <= '9')
	{
		putchar(i);
		putchar(u);
		u++;
		if (i < '8')
		{
			putchar(',');
			putchar(' ');
		}
	}
	u = i + 2;
	i++;
	}
	putchar('\n');
	return (0);
}
