# ifndef _VA_FUN_
# define _VA_FUN_
# ifndef NULL
# define NULL ((void *)0)
# endif
# include <stdarg.h>
# ifndef _va_copy
# define _va_copy(ap, s) (s = ap)
# endif
int _putchar(char c);
int sum_them_all(const unsigned int, ...);

#endif
