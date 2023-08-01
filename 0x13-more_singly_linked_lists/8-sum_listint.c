#include "lists.h"

/**
 * sum_listint - function sum data of linked list nodes
 * @head: pointer to first node of linked list
 * Return: total of (n) data of nodes
*/
int sum_listint(listint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
