# include "main.h"
/**
 * rev_string - reverse a string
 * @s: pointer variable
 */

void rev_string(char *s)
{
	int i, j;
	char tmp[1000];

	j = 0;
	for (i = 0; (*(tmp + i) = *(s + i)) != '\0'; i++)
		;
	while (i > 0)
		*(s + j++) = *(tmp + --i);
}
