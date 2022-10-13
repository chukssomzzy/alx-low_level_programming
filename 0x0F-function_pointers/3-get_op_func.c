# include "3-calc.h"

/**
 * get_op_fun - returns a function pointer when give a char pointer
 * @s: pointer to operand
 * Return: a function pointer or NULL
 */

int (*get_op_fun(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while ((*(ops + i)->op))
		if (*(ops + i++)->op == *s)
			return (*(ops + i - 1)->f);
	return (NULL);
}
