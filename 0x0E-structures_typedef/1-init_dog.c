#include "dog.c"
/**
 * init_dog - check the code
 *@d: it is value
 *@name: it is value
 *@age: it is value
 *@owner: it is value
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
