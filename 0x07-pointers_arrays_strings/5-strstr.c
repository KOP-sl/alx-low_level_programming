#include "main.h"
/**
 * _strstr- Entry point
 * @hay: input
 * @need: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *hay, char *need)
{
	for (; *hay != '\0'; hay++)
	{
		char *l = hay;
		char *p = need;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (hay);
	}
	return (0);
}
