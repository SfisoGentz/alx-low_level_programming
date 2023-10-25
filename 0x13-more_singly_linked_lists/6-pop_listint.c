#include "lists.h"

/**
 * pop_listint - Delete the first node of a list and return
 * its data
 * @head: the pointer of the list
 * Retuen: int 
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
	return (0);
	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (n);
}	
