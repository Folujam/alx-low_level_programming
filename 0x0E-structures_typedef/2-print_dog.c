#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  *print_dog - prints struct dog
  *@d: dog pointer
  *Return: void
  */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		if (d->age != -1)/*can't compare it to NULL, not ptr, its float*/
		{
			printf("Age: %f\n", d->age);
		}
		else
		{
			printf("Age: (nil)\n");
		}
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
