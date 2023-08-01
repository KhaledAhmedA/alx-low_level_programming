#include "lists.h"

/**
 * add_nodeint_end - function add new node in the end of linked list
 * @head: pointer for first element
 * @n: data of node
 * Return: pointer for a new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *createEndNode = malloc(sizeof(listint_t));
	listint_t *node;

	if (!createEndNode || !head)
		return (NULL);

	createEndNode->next = NULL;
	createEndNode->n = n;

	if (!*head)
		*head = createEndNode;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = createEndNode;
	}

	return (createEndNode);
}
