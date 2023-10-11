#include <stdlib.h>
#include "dog.h"

/**
  **new_dog - creates new dog data
  **_strdup - newly allocates space in mem, contains cpy of str
  *@name: pointer var
  *@age: float var
  *@owner: pointer var
  *Return: pointer/null
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == 0)
	{
		return (0);
	}
	new_dog->name = _strdup(name);
	if (new_dog->name == 0)
	{
		free(new_dog);
		return (0);
	}
	new_dog->owner = _strdup(owner);
	if (new_dog->owner == 0)
	{
		free(new_dog->name);
		free(new_dog);
		return (0);
	}
	new_dog->age = age;
	return (new_dog);
}
/**
  **_strdup - newly allocates space in mem, contains cpy of str
  *@str: pointer var
  *Return: pointer(success), null if str[null]
  */
char *_strdup(char *str)
{
	int i, j;/*indices*/
	char *newstr;/*new space*/

	if (str == 0)/*i null r null*/
	{
		return (0);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;/*strlen*/
	}
	newstr = malloc(i + 1 * sizeof(char));/*allocate memory*/
	if (newstr == 0) /*chk if null*/
	{
		return (0);
	}
	j = 0;
	while (j <= i)
	{
		newstr[j] = str[j];/*copy characters*/
		j++;
	}
	newstr[j] = '\0';/*add nullterm*/
	return (newstr);/*return pointer*/
}
