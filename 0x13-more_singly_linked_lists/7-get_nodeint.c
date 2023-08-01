#include "lists.h"

/**
 * get_nodeint_at_index - return node of given index
 * @head: first node pointer
 * @index: given index to get its node
 * Return: pointer of node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int n;

	for (node = head, n = 0; node && n < index; node = node->next, n++)
		;

	return (node);
}
