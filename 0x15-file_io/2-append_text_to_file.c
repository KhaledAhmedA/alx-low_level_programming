#include "main.h"

int _strlength(char *str);

/**
 * append_text_to_file - function append text to file content
 * @filename: file name
 * @text_content: given content to apppend
 * Return: 1 Success, -1 if Fail
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fHandler;
	ssize_t bytes = 0;
	ssize_t length = _strlength(text_content);

	if (!filename)
		return (-1);

	fHandler = open(filename, O_WRONLY | O_APPEND);

	if (fHandler == -1)
		return (-1);
	if (length)
		bytes = write(fHandler, text_content, length);

	close(fHandler);

	return (bytes == length ? 1 : -1);
}

/**
 * _strlength - function calc length of given string
 * @str: given string
 * Return: length of string, 0 if empty
*/
int _strlength(char *str)
{
	int i = 0;

	if (!str)
		return (0);
	while (*str++)
		i++;

	return (i);
}
