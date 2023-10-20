#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print-list - Check the code for Helberton School students
 * @h: name of list
 * @RReturn: The number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;
	while (h)
	{
	if (h -> str == NULL)
	
