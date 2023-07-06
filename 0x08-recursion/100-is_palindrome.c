#include "main.h"
int calc_length(char *str);
int _strcmp(char *str, int start, int end);
/**
 * is_palindrome - a function check if string equal reversed string
 * @s: given string
 * Return: 1 if equal, 0 if not
*/
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_strcmp(s, 0, calc_length(s) - 1));
}

/**
 * calc_length - a function calculate length of given string
 * @str: given string
 * Return: length of string
*/
int calc_length(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + calc_length(str + 1));
}

/**
 * _strcmp - a function compare string with another string if reversed equality
 * @str: string
 * @start: starting string
 * @end: end of string
 * Return: 0 (Sucess)
*/
int _strcmp(char *str, int start, int end)
{
	if (*(str + start) == *(str + end))
	{
		if (start == end || start == end + 1)
			return (1);
		return (0 + _strcmp(str, start + 1, end - 1));
	}
	return (0);
}
