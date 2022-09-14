# include "main.h"
#define islower 97
/**
 * _islower - returns a int for true and false state
 * @c: an interger to hold the decimal value of the character``
 * Return: 1 is true and 0 is false
 */

int _islower(int c)
{
	if (c >= islower)
		return (1);
	return (0);
}
