#include "lists.h"

/**
 * add_nodeint - function add new node at the beginning
 * @head: first node pointer
 * @n: data of node
 * Return: new node at beginning
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *createNode = malloc(sizeof(listint_t));

	if (!head || !createNode)
		return (NULL);

	createNode->next = NULL;
	createNode->n = n;

	if (*head)
		createNode->next = *head;

	*head = createNode;

	return (createNode);
}
