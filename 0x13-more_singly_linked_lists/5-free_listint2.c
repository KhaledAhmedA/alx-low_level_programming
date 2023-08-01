#include "lists.h"

/**
 * free_listint2 - function free nodes from linked list to NULL
 * @head: address of pointer of first element
 * Return: not return any value
*/
void free_listint2(listint_t **head)
{
	listint_t *node;
	listint_t *box;

	if (!head)
		return;
	node = *head;
	while (node)
	{
		box = node;
		node = node->next;
		free(box);
	}
	*head = NULL;
}
