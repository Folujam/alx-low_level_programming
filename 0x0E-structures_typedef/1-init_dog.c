#include "dog.h"

/**
  *init_dog - initializes struct dog
  *@d: struct pointer
  *@name: char pointer var
  *@age: float var
  *@owner: char pointer var
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
