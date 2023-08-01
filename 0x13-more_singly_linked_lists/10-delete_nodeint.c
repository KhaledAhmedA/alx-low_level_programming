#include "lists.h"

/**
 * delete_nodeint_at_index - function delete node of given index
 * @head: adrs of pointer of first element
 * @index: given index to delete
 * Return: 1 if success and -1 if not
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	listint_t *prevNode;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}

	node = *head;
	while (node)
	{
		if (i == node)
		{
			prevNode->next = node->next;
			free(node);
			return (1);
		}
		i++;
		prevNode = node;
		node = node->next;
	}

	return (-1);
}
