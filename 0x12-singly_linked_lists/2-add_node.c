#include "lists.h"

/**
 * add_node - function add new node at the beginning of linked list
 * @head: address of head node
 * @str: str of node
 * Return: list length
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *headNodeCreation = malloc(sizeof(list_t));

	if (!head || !headNodeCreation)
		return (NULL);
	if (str)
	{
		headNodeCreation->str = strdup(str);
		if (!headNodeCreation->str)
		{
			free(headNodeCreation);
			return (NULL);
		}
		headNodeCreation->len = _strlen(headNodeCreation->str);
	}
	headNodeCreation->next = *head;
	*head = headNodeCreation;

	return (headNodeCreation);
}
