#ifndef DOG_H
#define DOG_H
/**
 * struct dog - inicializar
 * @name: nombre del perro
 * @age: edad del perro
 * @owner: dueño
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
