#ifndef DOG_H
#define DOG_H
/**
 * struct dog - typedef for struct dog
 *@name: it is value
 *@age: it is value
 *@owner: it is value
 * Description: Define a new type struct dog with the following elements:
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
