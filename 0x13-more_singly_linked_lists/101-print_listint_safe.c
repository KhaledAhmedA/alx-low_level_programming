#include "lists.h"

const listint_t **_realloc(const listint_t **list, size_t size, const listint_t *newList);

/**
 * print_listint_safe - function print listint_t linked list
 * @head: pointer for first node
 * Return: length of linked list (number of nodes)
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t num, i;
	const listint_t **list = NULL;

	num = 0;
	while (head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _realloc(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);

	return (num);
}

/**
 * _realloc - function re-allocate for arr of pointers
 * @list: old list to append
 * @size: size of new list and always more then old one
 * @newList: new node to append
 * Return: pointer to new list
*/
const listint_t **_realloc(const listint_t **list, size_t size, const listint_t *newList)
{
	const listint_t	**reList;
	size_t i;

	reList = malloc(size * sizeof(listint_t *));

	if (reList == NULL)
	{
		free(list);
		exit(98);
	}

	for (i = 0; i < size - 1; i++)
		reList[i] = list[i];
	reList[i] = newList;
	free(list);

	return (reList);
}
