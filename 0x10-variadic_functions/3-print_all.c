#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything, followed by a new line
 * @format: the format string specifying the types of arguments
 */
void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0;
    char *str;
    char separator = 0;

    va_start(args, format);

    while (format && format[i])
    {
        if (separator)
            printf(", ");

        if (format[i] == 'c')
        {
            printf("%c", va_arg(args, int));
            separator = 1;
        }
        else if (format[i] == 'i')
        {
            printf("%d", va_arg(args, int));
            separator = 1;
        }
        else if (format[i] == 'f')
        {
            printf("%f", va_arg(args, double));
            separator = 1;
        }
        else if (format[i] == 's')
        {
            str = va_arg(args, char *);
            if (str == NULL)
                printf("(nil)");
            else
                printf("%s", str);
            separator = 1;
        }

        i++;
    }

    va_end(args);

    printf("\n");
}
