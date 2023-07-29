#include "lists.h"

/**
 * add_node_end - function add at end of linked list
 * @head: address of head pointer
 * @str: str of node
 * Return: linked list length
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tailNodeCreation = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !tailNodeCreation)
		return (NULL);
	if (str)
	{
		tailNodeCreation->str = strdup(str);
		if (!tailNodeCreation->str)
		{
			free(tailNodeCreation);
			return (NULL);
		}
		tailNodeCreation->len = _strlen(tailNodeCreation->str);
	}

	if (node)
	{
		while (node->next)
			node = node->next;

		node->next = tailNodeCreation;
	}
	else
		*head = tailNodeCreation;

	return (tailNodeCreation);
}
