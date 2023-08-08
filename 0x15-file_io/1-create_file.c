#include "main.h"

int _strlength(char *str);

/**
 * create_file - function to create file
 * @filename: file name
 * @text_content: given text to write in file
 * Return: 1 Success, 0 if Fail
*/
int create_file(const char *filename, char *text_content)
{
	int fHandler;
	ssize_t bytes = 0;
	ssize_t length = _strlength(text_content);

	if (!filename)
		return (-1);

	fHandler = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fHandler == -1)
		return (-1);

	if (length)
		bytes = write(fHandler, text_content, length);

	close(fHandler);

	return (bytes == length ? 1 : -1);
}

/**
 * _strlength - function return length of given string
 * @str: string
 * Return: kength num of string
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
