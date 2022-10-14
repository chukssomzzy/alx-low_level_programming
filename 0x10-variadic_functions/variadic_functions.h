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
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *, const unsigned int, ...);
void print_all(const char * const format, ...);

/**
 * struct format - holds the fmt string and fmt function
 * @fmt: the fmt string
 * @print_format: format function
 *
 * Description: data structure for print_all
 */

struct format
{
	char fmt;
	void (*print_format)(va_list);
};

/*
 * fmt_t - type alias for struct format
 */

typedef struct format fmt_t;

#endif
