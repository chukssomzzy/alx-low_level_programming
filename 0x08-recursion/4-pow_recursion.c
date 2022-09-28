# include "math.h"

/**
 * _pow_recursion - raise x to y
 * @x: base of operation
 * @y: superscript of operation
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
