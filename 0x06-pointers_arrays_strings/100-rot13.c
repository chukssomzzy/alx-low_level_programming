# include "main.h"

/**
 * rot13 - encode to rot13
 * @s: string to encode
 * Return: rot13 encode string
 */

char *rot13(char *s)
{
	int i, j;
	char A[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char R[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(s + i) != '\0'; i++)
		for (j = 0; *(A + j) != '\0'; j++)
			if (*(s + i) == *(A + j))
			{
				*(s + i) = *(R + j);
				break;
			}
	return (s);
}
