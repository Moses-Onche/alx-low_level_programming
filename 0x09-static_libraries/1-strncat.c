#include "main.h"

/**
 * _strncat - Concantenate two strings without the null pointer
 *
 * @dest: Destination array
 * @src: Source array
 * @n: memory allocation variable
 * Return: char variable dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
	{}

	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';
	return (dest);
}
