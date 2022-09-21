# include "main.h"

/**
 * _strncpy - copy nth byte to buffer
 * @dest: buffer to copy byte
 * @src: point to string src
 * @n: number of bytes to copy
 * Return: memory address to copyed string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && (*(dest + i) = *(src + i)) != '\0'; i++)
		;
	return (dest);
}
