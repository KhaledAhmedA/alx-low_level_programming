#include "lists.h"

/**
 * reverse_listint - function returns reversed linked list
 * @head: adrs of pointer to first element
 * Return: reversed linked list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL;
	listint_t *nextNode = NULL;

	if (!head || !*head)
		return (NULL);

	node = *head;
	*head = NULL;

	while (node)
	{
		nextNode = node->next;
		node->next = *head;
		*head = node;
		node = nextNode;
	}

	return (*head);
}
