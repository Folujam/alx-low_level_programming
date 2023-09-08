#include <stdio.h>

/**
 *main- Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of an interger is %li-byte(s)\n", sizeof(int));
	printf("size of an character is %li-byte(s)\n", sizeof(char));
	printf("size of an short is %li-byte(s)\n", sizeof(short));
	printf("size of an long double is %li-byte(s)\n", sizeof(long));
	printf("size of an float is %li-byte(s)\n", sizeof(float));
	return (0);
}
