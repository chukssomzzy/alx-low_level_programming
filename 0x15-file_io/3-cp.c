# include "main.h"
# include <stdio.h>
# define MAXRD 1024
void rd_from_and_write(const ssize_t ffd, const ssize_t tfd, char *buf,
		char *f, char *t);
/**
 * main - cp file to another location
 * @ac: size of array ac
 * @av: size of array av
 * Return: 97 if argument number is incorrect
 *			98 if file from does not exit
 *			99 if write fails
 *			100 if a file discriptor can't be closed
 *			0 (success)
 */

int  main(int ac, char **av)
{
	ssize_t tfd, ffd;
	char buf[MAXRD];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ffd = open(*(av + 1), O_RDONLY);
	if (ffd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *(av + 1));
		exit(98);
	}
	tfd = open(*(av + 2), O_WRONLY | O_TRUNC | O_APPEND | O_CREAT, 00664);
	if (tfd == -1)
	{
		ffd = close(ffd);
		if (ffd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %lu\n", ffd);
			exit(100);
		}
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", *(av + 2));
		exit(99);
	}
	rd_from_and_write(ffd, tfd, buf, *(av + 1), *(av + 2));
	exit(0);
}

/**
 * rd_from_and_write - syncroneously read from fildes
 * @ffd: file to read from
 * @tfd: file to write  to
 * @buf: buffer to limit max read
 * @f: file from
 * @t: file to
 * Return: 1 (success) and exit on failure
 */

void rd_from_and_write(const ssize_t ffd, const ssize_t tfd, char *buf,
		char *f, char *t)
{
	ssize_t rdcnt, wrcnt;

	while ((rdcnt = read(ffd, buf, MAXRD)) > 0)
	{
		wrcnt = write(tfd, buf, rdcnt);
		if (wrcnt == -1)
			break;
	}
	if (rdcnt == -1 || wrcnt == -1)
	{
		rdcnt = close(ffd);
		wrcnt = close(tfd);
		if (rdcnt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %lu\n", ffd);
			exit(100);
		}
		if (wrcnt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %lu\n", tfd);
			exit(100);
		}
		if (rdcnt == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f);
		if (wrcnt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", t);
			exit(99);
		}
		exit(98);
	}
}


