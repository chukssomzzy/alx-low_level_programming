# include "main.h"

/**
 * _strcat - add two string
 * @dest: first string
 * @src: second string
 * Return: a pointer to s1 + s2
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; *(dest + i) != '\0'; i++)
		;
	for (j = 0; (*(dest + i) = *(src + j)) != '\0'; i++, j++)
		;
	return (dest);
}
