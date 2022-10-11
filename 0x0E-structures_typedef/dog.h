# ifndef _DOG_H_
# define _DOG_H_
/**
 * struct, union, enum
 * typedef
 * functions prototype
 */
/**
 * struct dog - A dog struct
 * @name: first member of struct and holds name
 * @age: second member of struct and holds age
 * @owner: holds name of dogs owner
 *
 * Description: struct holds information on dogs
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

# endif
