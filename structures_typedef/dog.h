#ifndef dog_h
#define dog_h
#include <stdio.h>
/**
 * struct dog - inicializar
 * @name: nombre del perro
 * @age: edad del perro
 * @owner: dueño
 *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
