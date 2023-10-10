#ifndef HEADER_FILE
#define HEADER_FILE

/**
  *struct dog - defines new struct
  *@name: char pointer var
  *@age: float var
  *@owner: char pointer var
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
