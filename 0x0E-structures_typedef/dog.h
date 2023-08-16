#ifndef STRUCT_H_INCLUDED
#define STRUCT_H_INCLUDED



#include <stdio.h>
/**
 * struct dog - define a struct dog
 * @name: name of dog
 * @owner: owner of the dog
 * @age: age of the dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog dog_t;
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);


#endif
