#include "lists.h"

/**
  *b4_main - prints before main
  */
__attribute__((constructor))void b4_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
