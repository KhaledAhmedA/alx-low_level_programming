#include "lists.h"

/**
 * free_listint - function frees linked list nodes
 * @head: pointer to first node
 * Return: not return any value
*/
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
