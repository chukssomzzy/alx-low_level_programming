# include "main.h"

/**
 * _strncat - cat n byte of s2
 * @dest: destination pointer
 * @src: src pointer
 * @n: No of bytes
 * Return: buffer address
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; *(dest + i) != '\0'; i++)
		;
	for (j = 0; j < n && (*(dest + i) = *(src + j)) != '\0'; i++, j++)
		;
	if (*(dest + i) != '\0')
		*(dest + i) = '\0';
	return (dest);
}
