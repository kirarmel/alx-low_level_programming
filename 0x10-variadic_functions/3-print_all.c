#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
    unsigned int i = 0;
    char *str;
    va_list args;
    int first = 1;  

    va_start(args, format);
    while (format && format[i])
    {
        if (!first)
            printf(", ");

        switch (format[i])
        {
            case 'c':
                printf("%c", va_arg(args, int));
                break;
            case 'i':
                printf("%d", va_arg(args, int));
                break;
            case 'f':
                printf("%f", va_arg(args, double));
                break;
            case 's':
                str = va_arg(args, char *);
                if (str == NULL)
                    printf("(nil)");
                else
                    printf("%s", str);
                break;
            default:
                i++;
                continue;
        }
        first = 0;
        i++;
    }
    printf("\n");
    va_end(args);
}
