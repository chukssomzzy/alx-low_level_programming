# include <stdlib.h>
# include "dog.h"

/**
 * free_dog - free pointer to struct free_dog
 * @d: pointer to struct
 */

void free_dog(dog_t *d)
{
	free(d);
}
