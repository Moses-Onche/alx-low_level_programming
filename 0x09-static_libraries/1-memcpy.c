#include "main.h"

/**
 * _memcpy - Copy values from one array to another
 *
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: n amount of times
 * Return: the dest array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
