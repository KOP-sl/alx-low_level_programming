#include "main.h"
/**
 * times_tables - prints the 0 times table
 * Retyrn: 0 (Always Success)
 */

void times_table(void)
{

int a, b, c;

if (n < 0 || n > 15)
	return;
while (a <= n)
{
	for (b = 0; b <= n; b++)
	{
		rep = a * b;
		if (b == 0)
			_putchar('0' + rep);
		else if (rep < 10)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + rep);
		}
		else if (rep < 100)
		{
			_putchar(' ');
			_putchar('0' + rep / 10);
			_putchar('0' + rep % 10);
		}
		else
		{
			_putchar('0' + rep / 100);
			_putchar('0' + (rep - 100) / 10);
			_putchar('0' + rep % 10);
		}
		if (b < n)
		{
			_putchar(',');
			_putchar(' ')

		}
	}
	_putchar('\n');
	a++
}
}
