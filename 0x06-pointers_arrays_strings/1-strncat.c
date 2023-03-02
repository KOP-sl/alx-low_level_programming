#include "main.h"
/**
 * _strncat - concatenate two strings
 *
 * an inputted number of bytes from src.
 * @dest: input value
 * @src: input value
 * @n: The number of bytes from src to be appended to dest.
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	desk_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);
}
