# include "main.h"

/**
 * set_string - makes a pointer a pointee
 * @s: holds the address of the pointer
 * @to: pointer to hold the address of pointee
 */

void set_string(char **s, char *to)
{

	*s = to;
}
