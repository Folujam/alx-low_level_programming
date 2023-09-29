#include <stdio.h>

/**
 * main - even fibonacci
 * Return: int
*/
int main(void)
{
    int a = 1;
    int b = 2;
    int pendnext, int sum = 2;

    while (b < 4000000)
    {
        pendnext = a + b;
        if (pendnext % 2 == 0)
        {
            sum += pendnext;
        }
        a = b;
        b = pendnext;      
    }
    printf("%d", sum);
    printf("\n");
    return (0);
}