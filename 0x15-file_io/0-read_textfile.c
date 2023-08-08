#include "main.h"

/**
 * read_textfile - function read from file and print at std output
 * @filename: file name
 * @letters: nums of bytes to read
 * Return: bytes nums (readed/printed) or 0 if fail
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fHandle;
	ssize_t bytes;
	char buf[1024 * 8];

	if (!filename || !letters)
		return (0);

	fHandle = open(filename, O_RDONLY);

	if (fHandle == -1)
		return (0);

	bytes = read(fHandle, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(fHandle);

	return (bytes);
}
