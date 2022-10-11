# include <stdlib.h>
# include <stdio.h>
# include "dog.h"

/**
 * print_dog - prints dog
 * @d: struct to dog
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %6f\nOwner: %s\n", d->name, d->age, d->owner);
}
