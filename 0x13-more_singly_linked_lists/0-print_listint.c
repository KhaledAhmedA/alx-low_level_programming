#include "lists.h"

/**
 * print_listint - function print int in from node and return num of nodes
 * @h: pointer to passed node
 * Return: numbers of node
*/
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
