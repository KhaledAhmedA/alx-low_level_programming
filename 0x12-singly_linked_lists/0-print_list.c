#include "lists.h"
int _strlen(char *str);

/**
 * print_list - function print given linked list
 * @h: start element of linked list
 * Return: number of linked list and print value
*/
size_t print_list(const list_t *h)
{
	size_t len = 0;

	while(h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h-str : "(nil)");
		h = h->next;
		len++;
	}

	return (len);
}

/**
 * _strlen - function calc length of given string
 * @str: given string
 * Return: number of length
*/
int _strlen(char *str)
{
	int len = 0;

	if (!str)
		return (0);
	while (*str++)
		len++;
	return (len);
}
