# include <stdlib.h>
# include <stdio.h>
# include "dog.h"

/**
 * print_dog - prints dog
 * @d: struct to dog
 */

void print_dog(struct dog *d)
{
	if (!(*d).name)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", (*d).name);
	if (!(*d).age)
		printf("Age: (nil)\n");
	else
		printf("Age: %6f\n", (*d).age);
	if (!(*d).owner)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", (*d).owner);
}
