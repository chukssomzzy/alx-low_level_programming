# include "variadic_functions.h"
# include <stdarg.h>

/**
 * sum_them_all - sum variadic args together
 * @n: holds number of variadic args
 *
 * Description: undefined behaviour when trying to
 *				byte more than you can chew (accessing
 *				more args than you defined) the n arg is
 *				very important
 * Return: sum of all variadic arg all NULL onError
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	int sum;

	i = 0;
	sum = 0;
	va_start(ap, n);
	while (i++ < n)
		sum += va_arg(ap, int);
	return (sum);
}
