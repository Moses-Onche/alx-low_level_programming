#include "main.h"

/**
 * rot13 - encodes a string into rot13
 *
 * @s: string to encode
 * Return: char s
 */
char *rot13(char *s)
{
	int i;
	int j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMNnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
				break;
			}
		}
	}
	return (s);
}