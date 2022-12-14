# include "stdio.h"
# define ON_CHAR 1
# define OUT_OF_CHAR 0
/**
 * cap_string - capitalize string
 * @s: pointer to the string
 * Return: pointee address
 */

char *cap_string(char *s)
{
	int i, j, state, diff;
	char sep[13] = {'\t', '\n', ' ', ';', '.', '{', '}', '?', '"', '(', ')', '!'};

	state = OUT_OF_CHAR;
	diff = 'a' - 'A';
	for (i = 0; (*(s + i)) != '\0'; i++)
	{
		if (state)
		{
			if (*(s + i) >= 'a' && *(s + i) <= 'z')
				*(s + i) = *(s + i) - diff;
			state = OUT_OF_CHAR;
		}
		j = 0;
		while (*(sep + j) != '\0')
		{
			if (*(s + i) == *(sep + j++))
			{
				state = ON_CHAR;
				break;
			}

		}
	}
	return (s);
}
