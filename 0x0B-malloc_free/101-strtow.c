# include "main.h"
# include <stdlib.h>
# define INWORD 1
# define OUTWORD 0

int count_w(char *s);
int str_alloc(char *s, int len, char **p, int t);
void str_fill(char *s, char **p, int len);
/**
 * strtow - converts string to an array of words
 * @str: str array
 * Return: a 2d array
 */

char **strtow(char *str)
{
	int len;
	char **s;

	if (!str)
		return  (NULL);
	len = count_w(str);
	if(!len)
		return (NULL);
	s = malloc(sizeof(char *) * (len + 1));
	if (!s)
		return (NULL);
	if (str_alloc(str, len, s, 1))
		return (NULL);
	str_fill(str, s, len);
	*(s + len) = NULL;
	return (s);
}

/**
 * count_w - takes a string and count numbers of words
 * @s: String to find words
 * Description: delimits on spaces
 * Return: number of words
 */

int count_w(char *s)
{
	int i, c, state;

	i = c = state = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == ' ')
			state = INWORD;
		else if (state && ++c)
			state = OUTWORD;
		i++;
	}
	return (c);
}

/**
 * str_alloc - allocate memory to a string
 * @s: string to consider when allocating memory
 * @len: length of array
 * @p: pointer to array
 * @t: allocate or free
 * Return: binary
 */

int str_alloc(char *s, int len, char **p, int t)
{
	int i, j, pos, state, c;

	i = pos = c = 0;
	if (t)
	{
		while (i < len)
		{
			j = pos;
			while (*(s + j) != '\0')
			{
				if (*(s + j) == ' ')
					state = INWORD;
				else if (state && ++c)
					if (*(s + j + 1) == ' ')
					{
						pos = j + 1;
						state = OUTWORD;
						break;
					}
				j++;
			}
			*(p + i) =  malloc(sizeof(char) * (c + 1));
			if (!*(p + i))
			{
				str_alloc(NULL, len, p, 0);
				return (1);
			}
			c = 0;
			i++;
		}
	} else
	{
		while (i < len)
			free(p[i]);
		free(p);
	}
	return (0);
}

/**
 * str_fill - file out a 2d array with word from an array
 * @s: string to find word
 * @p: pointer to 2d array
 * @len: len of array
 */

void str_fill(char *s, char **p, int len)
{
	int i, j, k, state, pos;

	state = j = pos = k = 0;
	for (i = 0; i < len; i++)
	{
		j = pos;
		while (*(s + j) != '\0')
		{
			if (*(s + j) == ' ')
				state = INWORD;
			else if (state)
			{
				p[i][k++] = *(s + j);
				if (*(s + j + 1) == ' ')
				{
					p[i][k] = '\0';
					k = 0;
					pos = j;
					state = OUTWORD;
					break;
				}
			}
			j++;
		}
	}
}

