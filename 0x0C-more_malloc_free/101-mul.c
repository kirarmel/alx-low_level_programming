#include <stdio.h>
#include <stdlib.h>

void error_exit(void);
void multiply(char *num1, char *num2);

/**
 * error_exit - prints Error and exits with status 98
 */
void error_exit(void)
{
    printf("Error\n");
    exit(98);
}

/**
 * multiply - multiplies two large numbers stored as strings
 * @num1: first number as string
 * @num2: second number as string
 */
void multiply(char *num1, char *num2)
{
    int len1 = 0, len2 = 0;
    int i, j, k;
    int *result;

    while (num1[len1])
        len1++;
    while (num2[len2])
        len2++;

    result = calloc(len1 + len2, sizeof(int));

    for (i = len1 - 1; i >= 0; i--)
    {
        for (j = len2 - 1; j >= 0; j--)
        {
            k = i + j + 1;
            result[k] += (num1[i] - '0') * (num2[j] - '0');
            while (result[k] >= 10)
            {
                result[k - 1] += result[k] / 10;
                result[k] %= 10;
                k--;
            }
        }
    }

    i = 0;
    while (result[i] == 0 && i < len1 + len2 - 1)
        i++;

    for (; i < len1 + len2; i++)
        putchar(result[i] + '0');
    putchar('\n');

    free(result);
}

/**
 * main - entry point, multiplies two positive numbers passed as arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
    char *num1, *num2;
    int i, j;

    if (argc != 3)
        error_exit();

    num1 = argv[1];
    num2 = argv[2];

    for (i = 1; i <= 2; i++)
    {
        for (j = 0; argv[i][j]; j++)
        {
            if (argv[i][j] < '0' || argv[i][j] > '9')
                error_exit();
        }
    }

    multiply(num1, num2);

    return (0);
}

