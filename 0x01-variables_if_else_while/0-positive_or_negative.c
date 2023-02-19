#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints if the number is positive,negative or 0
 * Return: Always 0
 */
int main(void)
{

	int n;

	lastd = n % 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, lastd);
	}
	else if (lastd < 6 && lastd != 0)
	{
		printf("last digit of %d is %d and is less than 6and not 0\n", n, lastd);
	}
	return (0);
}
