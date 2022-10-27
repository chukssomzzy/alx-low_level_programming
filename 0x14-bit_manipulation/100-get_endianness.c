# include "main.h"

/**
 * get_endianness - check machine get_endianeess
 * Return: binary
 */

int get_endianness(void)
{
	int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	return (0);
}


