# include "main.h"
# include <stdlib.h>

/**
 * _realloc - changed the memory allocate to pointer from the heap
 * @ptr: pointer to memory to be changed
 * @old_size: size of old memory
 * @new_size: new size to be allocated
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *tmp_ptr;
	char *cast_ptr = (char*) ptr;

	if (new_size == old_size)
		return (ptr);
    tmp_ptr = malloc(new_size);
	if (!ptr)
		return (tmp_ptr);
	else if (!new_size)
	{
		free(ptr);
		return (NULL);
	}
    if (!tmp_ptr)
	{
		free(tmp_ptr);
		return (NULL);
	}
    i = 0;
	while (i < old_size)
	{
		*(tmp_ptr + i) = *(cast_ptr + i);
		i++;
	}

	free(ptr);
	return (tmp_ptr);
}
