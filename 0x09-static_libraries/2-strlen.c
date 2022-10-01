#include <stdio.h>

/**
 * _strlen - read string length
 *
 * @s: pointer integer
 * Return: return length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}
