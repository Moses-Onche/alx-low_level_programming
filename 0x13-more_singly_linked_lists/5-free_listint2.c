#include "lists.h"
/**
 * free_listint2 - this function frees a list
 * @head: the pointer to the struct
 *
 * Return: the number of elements
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
	{
		return;
	}
	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}
	*head = NULL;
}
