#include <stdlib.h>
#include "dog.h"

/**
  *free_dog - frees dogs
  *@d: pointer var of dog_t type
  *Return: void
  */
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
