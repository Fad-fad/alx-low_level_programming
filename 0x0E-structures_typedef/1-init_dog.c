/**
* init_dog - init
* @d: pointer
* @name: nam
* @age: age
* @owner: own
*/
#include <stdlib.h>
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}


