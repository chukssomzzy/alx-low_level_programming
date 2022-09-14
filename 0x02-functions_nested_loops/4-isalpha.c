# include <stdio.h>

/**
 * _isalpha - check if params is an alphabet
 * @c: an interger to hold decimal value of params
 * Return: alphabet return (1) and (0) for otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
