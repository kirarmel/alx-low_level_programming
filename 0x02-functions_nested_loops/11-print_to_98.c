/**
 * print_to_98 - Prints all integers from a given number up to 98.
 * @n: Starting number from which to print.
 *
 * Description: This function prints integers starting from @n up to 98,
 * separated by commas. It handles both increasing and decreasing sequences
 * based on whether @n is less than or greater than 98. The final integer
 * is followed by a newline character.
 */
void print_to_98(int n)
{
    int i;

    if (n <= 98)
    {
        for (i = n; i <= 98; ++i)
        {
            printf("%d", i);
            if (i != 98)
                printf(", ");
        }
    }
    else
    {
        for (i = n; i >= 98; --i)
        {
            printf("%d", i);
            if (i != 98)
                printf(", ");
        }
    }
    printf("\n");
}
