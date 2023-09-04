#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: the conted added
 *
 * Return: 1 if the file exists. -1 if the file  doesnt exist.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int def;
	int l_num;
	int rd_rt;

	if (!filename)
		return (-1);

	def = open(filename, O_WRONLY | O_APPEND);

	if (def == -1)
		return (-1);

	if (text_content)
	{
		for (l_num = 0; text_content[l_num]; l_num++)
			;

	rd_rt = write(def, text_content, l_num);

	if (rd_rt == -1)
		return (-1);
	}

	close(def);

	return (1);
}
