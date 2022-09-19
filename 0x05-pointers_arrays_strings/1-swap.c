# include "main.h"

/**
 * swap_int - swap the value of two int (*)
 * Description: emulating call by reference
 * @a: hold memory address for first variable
 * @b: hold memory address for second variable ``
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
