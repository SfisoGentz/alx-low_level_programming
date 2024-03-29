#include "lists.h"

/**
 * free-listint2 - Frees a listint-t list.
 * @header: A pointer to the address of the 
 *          head of the listsint_t list.
 *
 * Description: Sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
	return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
