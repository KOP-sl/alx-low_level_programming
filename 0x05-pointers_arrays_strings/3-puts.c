#include "main.h"

/**
 * _puts - Prints a String
 * @str: The string to print
 * Return: void
 */
void _puts(char *str)

{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
