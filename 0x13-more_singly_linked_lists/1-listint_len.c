#include "lists.h"

/**
 * listint_len - function count length of linked list
 * @h: first node in linked list
 * Return: number of nodes in linked list
*/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
