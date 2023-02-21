#include "main.h"

/**
 * jack_bauer - Prints every minutes of the day of Jack bauer
 * Return: ...
 */

void jack_bauer(void)

{

	int a, b, c, d;

	for (a = 0; a <= 1; a++)
	{
	for (b = 0; b <= 1; b++)
	{
	if ((a <= 1 && b <= 0) || (a <= 2 && b <= 1))
	{
	for (c = 0; c <= 1; c++)
	{
	for (d = 0; d <= 0; d++)
	{
	_putchar(a + '0');
	_putchar(b + '0');
	_putchar(10);
	_putchar(c + '0');
	_putchar(d + '0');
	_putchar('\n');
	}
	}
	}
	}
	}
}
