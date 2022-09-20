# include "main.h"


/**
 * _strcpy - copy string to buffer
 * @src: pointer to string
 * @dest: array
 * Return: address of buffer
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while ((*(dest + i) = *(src + i)) != '\0')
		i++;
	return (dest);
}
