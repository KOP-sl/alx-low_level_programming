#include "main.h"
#include <stdio.h>

/**
 * main - Prints a Fizz Buzz program 1 to 100
 * 3 multiples print fizz instead of a number
 * 5 print buzz instead of a number
 * 3 & 5 print FizzBuzz
 * Return: Always 0
 */
int main(void)
{
int i;
char f[] = "Fizz";
char b[] = "Buzz";
char fb[] = "FizzBuzz";

for (i = 1; i <= 100; i++)
{
if (i == 100)
printf("%s", b);
else if ((i % 3 == 0) && (i % 5 == 0))
printf("%s", fb);
else if (i % 3 == 0)
printf("%s", f);
else if (i % 5 == 0)
printf("%s", b);
else
printf("%d", i);
}
printf("\n";
return (0);
}
