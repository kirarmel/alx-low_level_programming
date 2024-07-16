#include <stdlib.h>
#include "main.h"

/**
 * count_words - helper function to count the number of words in a string
 * @str: string to evaluate
 *
 * Return: number of words
 */
int count_words(char *str)
{
    int i, count, in_word;

    i = 0;
    count = 0;
    in_word = 0;

    while (str[i])
    {
        if (str[i] == ' ')
        {
            in_word = 0;
        }
        else if (!in_word)
        {
            in_word = 1;
            count++;
        }
        i++;
    }

    return (count);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (words)
 */
char **strtow(char *str)
{
    char **words, *temp;
    int i, k, len, word_start, word_len, word_count;
    int j;  

    if (str == NULL || *str == '\0')
        return (NULL);

    word_count = count_words(str);
    if (word_count == 0)
        return (NULL);

    words = (char **)malloc((word_count + 1) * sizeof(char *));
    if (words == NULL)
        return (NULL);

    i = 0;
    k = 0;
    while (str[i])
    {
        while (str[i] == ' ')
            i++;

        if (str[i])
        {
            word_start = i;
            word_len = 0;
            while (str[i] && str[i] != ' ')
            {
                word_len++;
                i++;
            }

            temp = (char *)malloc((word_len + 1) * sizeof(char));
            if (temp == NULL)
            {
                for (j = 0; j < k; j++)
                    free(words[j]);
                free(words);
                return (NULL);
            }

            for (len = 0; len < word_len; len++)
                temp[len] = str[word_start + len];
            temp[len] = '\0';

            words[k++] = temp;
        }
    }
    words[k] = NULL;

    return (words);
}
