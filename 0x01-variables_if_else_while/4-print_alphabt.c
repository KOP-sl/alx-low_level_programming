#include <stdio.h>

/**
 * main - prints the alphabets in lower case
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}

	puctchar('\n');
	return (0);
}
