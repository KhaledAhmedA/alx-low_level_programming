#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_RD "Error: Can't read from file %s\n"
#define ERR_WR "Error: Can't write to %s\n"
#define ERR_CLOSE "Error: Can't close fd %d\n"
#define PERM (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - entry point  make handle of file operations
 * @arc: arguments length
 * @arg: arguments value
 * Return: 1 SUCCESS, 0 FAIL
*/
int main(int arc, int **arg)
{
	int from_fd = 0;
	int to_fd = 0;
	ssize_t i;
	char buf[1024];

	if (arc != 3)
	{
		dprintf(STDERR_FILENO, USAGE);
		exit(97);
	}

	from_fd = open(arg[1], O_RDONLY);
	if (from_fd == -1)
		dprintf(STDERR_FILENO, ERR_RD, arg[1]), exit(98);

	to_fd = open(arg[2], O_WRONLY | O_CREAT | O_TRUNC, PERM);
	if (to_fd == -1)
		dprintf(STDERR_FILENO, ERR_WR, arg[2]), exit(99);

	while ((i = read(from_fd, buf, 1024)) > 0)
		if (write(to_fd, buf, i) != i)
			dprintf(STDERR_FILENO, ERR_WR, arg[2]), exit(99);
	if (i == -1)
		dprintf(STDERR_FILENO, ERR_RD, arg[1]), exit(98);

	from_fd = close(from_fd);
	to_fd = close(to_fd);
	if (from_fd)
		dprintf(STDERR_FILENO, ERR_CLOSE, from_fd), exit(100);
	if (to_fd)
		dprintf(STDERR_FILENO, ERR_CLOSE, from_fd), exit(100);

	return (EXIT_SUCCESS);
}

