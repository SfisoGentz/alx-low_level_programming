#include "lists.h"

/**
 * get_nodeint_at_index - retrieve a not at an ending
 * @head: pointer to the first element of the list
 * @index: node desired poaition to retrieve
 * Return: pointer to the retrieve node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; a < index; a++)
	{
	if (head == NULL)
	return (NULL);
	head = head->next;
	}
	return (head);
}
