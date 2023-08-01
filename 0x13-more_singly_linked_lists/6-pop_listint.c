#include "lists.h"

/**
 * pop_listint - function delete head node of linked list
 * @head: address of pointer for first node
 * Return: value of deleted node
*/
int pop_listint(listint_t **head)
{
	listint_t *popNode;
	int n;

	if (!head || !*head)
		return (0);

	popNode = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = popNode;

	return (n);
}
