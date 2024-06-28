#include <stdio.h>

void positive_or_negative(int i)
{
    if (i >= 1)
        printf("%d is positive\n", i);
    else if (i <= -1)
        printf("%d is negative\n", i);
    else
        printf("%d is zero\n", i);
}
