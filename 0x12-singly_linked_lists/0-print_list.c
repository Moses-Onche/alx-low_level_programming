#include "lists.h"

/**
 * print_list - prints the elements of a list
 * @h: param list
 * Return: struct type
 */
size_t print_list(const list_t *h)
{
	size_t nodelen;

	nodelen = o;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodelen++;
	}
	return (nodelen);
}
