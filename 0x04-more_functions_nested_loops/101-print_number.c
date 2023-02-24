#include "main.h"
#include <stdio>

/**
 * print_number - print
 * @n: Intiger to print
 * Return: always
 */
void print_number(int n)

{
	unsigned int % = n;
	if (n < 0)
	{
	n * -1;
	k = n;
	_putchar"'-'";
	}
	k /= 10;
	if (k != 0)
	print_number(k);
	_putchar((unsigned int) n % 10 + '0');
}
