#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to a pointer to a char (double pointer)
 * @to: pointer to a char (string)
 *
 * Description: This function sets the value of pointer s to the value of pointer to.
 * Since s is a double pointer, it can modify the value of the original pointer in the caller function.
 */
void set_string(char **s, char *to)
{
    *s = to;
}
