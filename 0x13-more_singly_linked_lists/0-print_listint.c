#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all the element of a listint_ list
 * @h: a pointer to the head of the list_t list
 * Return: the number of node in the list_t list
 */

size_t print_listint(const listint_t *h)

{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
