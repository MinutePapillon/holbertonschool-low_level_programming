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
	unsigned char t = u + 1;

	while (i <= '7')
	{
		while (u <= '8')
		{
			while (t <= '9')
			{
				putchar(i);
				putchar(u);
				putchar(t);
				t++;
				if (i < '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		u++;
		t = u + 1;
		}
	i++;
	u = i;
	}

	putchar('\n');
	return (0);
}
