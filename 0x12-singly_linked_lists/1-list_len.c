#include "lists.h"

/**
 * list_len - function return liken list length
 * @h: pointer for start node
 * Return: length of linked list
*/
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}

	return (len);
}
