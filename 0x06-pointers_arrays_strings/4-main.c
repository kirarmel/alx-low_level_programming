#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array of integers
 * @a: array to print
 * @n: number of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (i != 0)
            printf(", ");
        printf("%d", a[i]);
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
    int n = sizeof(a) / sizeof(int);

    printf("Original array:\n");
    print_array(a, n);

    reverse_array(a, n);

    printf("Reversed array:\n");
    print_array(a, n);

    return (0);
}
