# include "main.h"
# include <stdlib.h>

int _strlen(char *s);
int _strposcat(int i, char *p, char *s);
/**
 * argstostr - add string together and delimit with newline
 * @ac: length of av
 * @av: contains string argtostr
 * Return: pointer to new string
 */


char *argstostr(int ac, char **av)
{
	char *s;
	int pos, i, len;

	if (!ac || !av)
		return (NULL);
	i = 0;
	len = 0;
	while (i < ac)
	{
		len += _strlen(*(av + i));
		i++;
	}
	s = malloc(sizeof(char) * (len + ac + 1));
	if (!s)
	{
		free(s);
		return (NULL);
	}
	i = 1;
	pos = 0;
	while (i < ac)
	{
		pos = _strposcat(pos, s, *(av + i));

		i++;
	}
	*(s + ++pos) = '\0';
	return (s);
}


/**
 * _strlen - find length of string delimited by '\0'
 * @s: pointer to string
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0' && ++i)
		;
	return  (i);
}

/**
 * _strposcat - takes an pos to add a string and limits with newline
 * @i: pos to start
 * @p: pointer to add str to
 * @s: str to add
 * Return: end position
 */

int _strposcat(int i, char *p, char *s)
{
	int j = 0;

	while ((*(p + i) = *(s + j++)) != '\0')
		i++;
	if (*(p + i) == '\0')
		*(p + i) = '\n';
	return (i + 1);
}
