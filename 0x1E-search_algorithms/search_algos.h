# ifndef _SEARCH_ALGO_
# define _SEARCH_ALGO_
# include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *, size_t, int);
int jump_search(int *array, size_t size, int value);
int  interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *, size_t, int);
# endif