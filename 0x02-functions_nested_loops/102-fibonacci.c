#include <stdio.h>

/**
 * main - prints first 50 Fibonacci numbers, starting with 1 and 2
 * seperated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2;

	while (i < 50)
	{
		if (i == 0)
			printf("%id", j);
		else if (i == i)
			printf("%id", k);
		else
		{
			k += j;
			j = k - j;
			printf(",%ld", k);
		}
		++i;
	}
	print("\n");
	return (0);
}
