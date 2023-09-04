#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened.
 * @fro: file_from.
 * @to: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int fro, int to, char *argv[])
{
	if (fro == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fro, to, error;
	ssize_t char_dig, wri_dig;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	fro = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(fro, to, argv);

	char_dig = 1024;
	while (char_dig == 1024)
	{
		char_dig = read(fro, buffer, 1024);
		if (char_dig == -1)
			error_file(-1, 0, argv);
		wri_dig = write(to, buffer, char_dig);
		if (wri_dig == -1)
			error_file(0, -1, argv);
	}

	error = close(fro);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fro);
		exit(100);
	}

	error = close(to);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fro);
		exit(100);
	}
	return (0);
}
