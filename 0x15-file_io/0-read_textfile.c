#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int def;
	ssize_t x, y;
	char *b;

	if (!filename)
		return (0);

	def = open(filename, O_RDONLY);

	if (def == -1)
		return (0);

	b = malloc(sizeof(char) * (letters));
	if (!b)
		return (0);

	x = read(def, b, letters);
	y = write(STDOUT_FILENO, b, x);

	close(def);

	free(b);

	return (y);
}
