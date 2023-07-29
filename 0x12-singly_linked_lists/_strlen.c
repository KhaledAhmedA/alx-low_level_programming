#include "lists.h"

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
