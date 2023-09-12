#include "main.h"

/**
 *_islower - entry point
 *@c: decleared variable
 *Return: always 0 (success)
 */
int _islower(int c)
{
	if (c => 'a' || c <= 'z')
		return (1);
	else
		return (0);
}
