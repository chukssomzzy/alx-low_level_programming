# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

/**
 * read_textfile - read a textfile and print to stdout
 * @filename: filename or location of file
 * @letters: Count to print
 * Return: the number of file printed or 0 on error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, cnt, wrcnt;
	char *buf = malloc(sizeof(char) * letters);

	fd = open(filename, O_RDONLY);
	if (fd == -1 || !filename)
		return (0);
	cnt = read(fd, buf, letters);
	if (cnt == -1)
		return (0);
	wrcnt = write(STDIN_FILENO, buf, cnt);
	if (cnt == -1 && wrcnt != cnt)
		return (0);
	return (wrcnt);
}
