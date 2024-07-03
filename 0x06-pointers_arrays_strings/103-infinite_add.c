#include "main.h"

/**
 * infinite_add - adds two numbers represented as strings.
 * @n1: the first number
 * @n2: the second number
 * @r: the buffer to store the result
 * @size_r: the buffer size
 *
 * Return: pointer to the result, or 0 if the result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i, j, k, len1, len2, sum, carry;

    for (len1 = 0; n1[len1]; len1++)
        ;
    for (len2 = 0; n2[len2]; len2++)
        ;

    carry = 0;
    i = len1 - 1;
    j = len2 - 1;
    k = size_r - 1;
    r[k--] = '\0';

    while (i >= 0 || j >= 0 || carry)
    {
        if (k < 0)
            return (0); 

        sum = carry;
        if (i >= 0)
            sum += n1[i--] - '0';
        if (j >= 0)
            sum += n2[j--] - '0';

        carry = sum / 10;
        r[k--] = (sum % 10) + '0';
    }

    if (k >= 0)
    {
        for (i = 0; r[k + 1]; i++, k++)
            r[i] = r[k + 1];
        r[i] = '\0';
        return (r);
    }

    return (0); 
}
