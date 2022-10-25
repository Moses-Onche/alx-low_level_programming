#include "lists.h"

/**
 * free_listint2 - this function frees a list
 * @head: the pointer to the struct
 *
 * Return: the number of elements
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (*head == NULL || head == NULL)
	{
		return;
	}
	while ((*head)->next != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	free(*head);
	*head = NULL;
}
