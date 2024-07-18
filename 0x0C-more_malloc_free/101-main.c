#include "main.h"
#include <string.h>
#include <stdio.h>

int *multiply(char *num1, char *num2);
void print_array(int *arr);

int main(int argc, char *argv[])
{
    int *res;

    if (argc != 3)
    {
        printf("Error\n");
        return 98;
    }

    if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
    {
        printf("Error\n");
        return 98;
    }

    res = multiply(argv[1], argv[2]);

    if (res == NULL)
    {
        printf("Error\n");
        return 98;
    }

    print_array(res);
    free(res);

    return 0;
}

int *multiply(char *num1, char *num2)
{
    return NULL; // Placeholder for actual multiplication logic
}

void print_array(int *arr)
{
    // Placeholder for printing array elements
}
