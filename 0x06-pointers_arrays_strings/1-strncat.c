# include "main.h"

/**
 * strncat - cat n byte of s2
 * Description: since alguments contains byte number, string does not have to explicitly include null terminator
 * @s1: destination pointer
 * @s2: src pointer
 * @n: No of bytes
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
