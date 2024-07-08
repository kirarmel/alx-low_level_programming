#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix (number of rows and columns)
 *
 * Description: The matrix is stored as a 1-dimensional array of size size * size.
 * This function calculates the sum of the diagonal elements (both from top-left
 * to bottom-right and from top-right to bottom-left) and prints them.
 */
void print_diagsums(int *a, int size)
{
    int i;
    int sum_diag1 = 0;
    int sum_diag2 = 0;

    for (i = 0; i < size; i++)
    {
        sum_diag1 += *(a + i * size + i);
    }

    
    for (i = 0; i < size; i++)
    {
        sum_diag2 += *(a + i * size + (size - 1 - i));
    }

    printf("%d, %d\n", sum_diag1, sum_diag2);
}
