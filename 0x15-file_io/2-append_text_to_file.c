# include "main.h"

static ssize_t _strlen(char *);

/**
 * append_text_to_file - append file to end of file
 * @filename: append text to end of file
 * @text_content: text buffer
 * Return: 1 (success) -1 (failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t cnt, ocnt, wcnt;

	if (!filename)
		return (-1);
	ocnt = open(filename, O_WRONLY | O_APPEND);
	if (ocnt == -1)
		return (ocnt);
	if (text_content)
	{
		cnt = _strlen(text_content);
		wcnt = write(ocnt, text_content, cnt);
		if (wcnt == -1)
		{
			close(ocnt);
			return (-1);
		}
	}
	close(ocnt);
	return (1);
}




/**
 * _strlen - get string len
 * @s: points to cbaracter string
 * Return: signed int
 */

ssize_t _strlen(char *s)
{
	char *p;

	p = s;
	while (*p)
		p++;
	return (p - s);
}
