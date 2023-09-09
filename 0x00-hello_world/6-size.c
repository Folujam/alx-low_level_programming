#include <stdio.h>

/**
 *main- Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of an interger is %zu byte(s)\n", sizeof(int));
	printf("Size of a character is %zu byte(s)\n", sizeof(char));
	printf("size of a long long is %zu byte(s)\n", sizeof(long long));
	printf("Size of a long int is %zu byte(s)\n", sizeof(long));
	printf("Size of a float is %zu byte(s)\n", sizeof(float));
	return (0);
}
