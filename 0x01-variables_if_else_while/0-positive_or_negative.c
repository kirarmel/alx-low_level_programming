#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;

    srand(time(NULL));

    n = rand() % 201 - 100; 

    if (n > 0)
    {
        puts("%d is positive\n", n);
    }
    else if (n < 0)
    {
        printf("%d is negative\n", n);
    }
    else 
    {
        printf("%d is positive\n", n);
    }

    return (0);
}
