#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer
 * @a: hkjhkj
 * Return: 0 on sucess
 */
void jack_bauer(void)
{
	char a, b, c, d;
	for (a = '0'; a <= '2'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '5'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
				_putchar(a);
				_putchar(b);
				_putchar(':');
				_putchar(c);
				_putchar(d);
				_putchar('\n');
				}
			d = '0';
			}
		c = '0';
		}
	b = '0';
	}
}
