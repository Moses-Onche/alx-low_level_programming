#include "main.h"

/**
 * _strcmp - Compare two strings
 *
 * @s1: String one
 * @s2: String two
 * Return: int value of string
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] - s2[a] == 0 && s1[a] != '\0')
	{
		a++;
	}
	return (s1[a] - s2[a]);
}
