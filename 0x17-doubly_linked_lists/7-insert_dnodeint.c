#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new node
 * @h: An input character
 * @idx: An input character
 * @n: An input character
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	arrow = *h;
	counter = 0;
	addnode = malloc(sizeof(dlistint_t));
	addnode->n = n;
	addnode->prev = NULL;
	addnode->next = NULL;

	while (counter != idx)
	{
		counter++;
		arrow = arrow->next;
	}
	arrow->prev->next = addnode;
	arrow->prev = addnode;
	addnode->n = n;
	addnode->next = arrow;
	return (arrow->prev);
}