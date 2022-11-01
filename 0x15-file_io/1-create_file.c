# include "main.h"
#include <fcntl.h>

static ssize_t _strlen(char *);
/**
 * create_file - create file on file system
 * @filename: filename to create
 * @text_content: a null terminated string to write to file
 *
 * Return: 1 onsuccess and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t cnt, o_cnt;

	if (!filename)
		return (-1);
	cnt = _strlen(text_content);
	o_cnt = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (o_cnt == -1)
		return (-1);
	if (cnt == -1)
		cnt = 0;
	o_cnt = write(o_cnt, text_content, cnt);
	if (o_cnt == -1)
	{
		close(o_cnt);
		return (-1);
	}
	close(o_cnt);
	return (1);
}

/**
 * _strlen - return len of a pointer
 * @s: string pointer
 * Return: an unsigned int
 */

ssize_t _strlen(char *s)
{
	char *p;

	p = s;
	if (!s)
		return (-1);
	while (*p)
		p++;
	return (p - s);
}



