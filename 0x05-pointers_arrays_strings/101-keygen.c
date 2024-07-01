#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 15

/**
 * main - generates a random password for the 101-crackme program
 *
 * Return: Always 0
 */
int main(void)
{
    char password[PASSWORD_LENGTH + 1];
    int i;

    srand(time(NULL));

    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        password[i] = rand() % 94 + 33; 
    }
    password[PASSWORD_LENGTH] = '\0' ;

    printf("%s", password);

    return 0;
}
