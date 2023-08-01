#include "lists.h"

/**
 * insert_nodeint_at_index - function insert node at given index
 * @head: ads of pointer of first element in linked list
 * @idx: given index
 * @n: value of new node
 * Return: adrs of new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *insNode;
	unsigned int i = 0;

	insNode = malloc(sizeof(listint_t));
	if (!head || !insNode)
		return (NULL);

	insNode->n = n;
	insNode->next = NULL;

	if (!idx)
	{
		insNode->next = *head;
		*head = insNode;
		return (insNode);
	}

	node = *head;

	while (node)
	{
		if (i == idx - 1)
		{
			insNode->next = node->next;
			node->next = insNode;
			return (insNode);
		}
		i++;
		node = node->next;
	}

	free(insNode);
	return (NULL);
}
