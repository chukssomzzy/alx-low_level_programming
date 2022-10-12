# ifndef _FUN_PTR_H
# define _FUN_PTR_H
# ifndef NULL
# define NULL ((void *)0)
# endif
/**
 * size_t - type defination for unsigned long int
 */
typedef unsigned long int size_t;
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
# endif
