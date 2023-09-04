#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int def;
	int l_num;
	int rd_rt;

	if (!filename)
		return (-1);

	def = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (def == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (l_num = 0; text_content[l_num]; l_num++)
		;

	rd_rt = write(def, text_content, l_num);

	if (rd_rt == -1)
		return (-1);

	close(def);

	return (1);
}
