#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure
 * @name: name
 * @age: age
 * @owner: owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int get_len(int i);
char *str_cpy(char *dest, char *src);
void free_dog(dog_t *d);

#endif /* DOG_H */
