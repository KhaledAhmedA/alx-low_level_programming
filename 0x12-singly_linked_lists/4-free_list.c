#include "lists.h"

/**
 * free_list - function free memory from linked list
 * @head: head of linked list
 * Return: not return any value
*/
void free_list(list_t *head)
{
	list_t *curr;

	while ((curr = head) != NULL)
	{
		head = head->next;
		free(curr->str);
		free(curr);
	}
}
