#include "main.h"

/**
 * _strspn - Get the length of a prefix substring
 *
 * @s: string to scan
 * @accept: accepted bytes
 * Return: result, series of unsigned values
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int result;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				result++;
				break;
			}
		}
		if (s[j] == '\0')
			return (result);
	}
	return (result);
}
