#include "lists.h"

listint_t *find_listint_loop(listint_t *head);

/**
 * free_listint_safe - function frees listint list iven if has loop
 * @h: first of list (head)
 * Return: num of freed nodes
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *next;
	listint_t *lNode;
	size_t length;
	int lp = 1;

	if (h == NULL || *h == NULL)
		return (0);

	lNode = find_listint_loop(*h);

	for (length = 0; (*h != lNode || lp) && *h != NULL; *h = next)
	{
		length++;
		next = (*h)->next;

		if (*h == lNode && lp)
		{
			if (lNode == lNode->next)
			{
				free(*h);
				break;
			}
			length++;
			next = next->next;
			free((*h)->next);
			lp = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (length);
}

/**
 * find_listint_loop - function finds loops in linked list
 * @head: linked list for search
 * Return: adrs of node where start or returns and null if no loops
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p;
	listint_t *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (p = head; p != end; p = p->next)
			if (p == end->next)
				return (end->next);
	}

	return (NULL);
}
