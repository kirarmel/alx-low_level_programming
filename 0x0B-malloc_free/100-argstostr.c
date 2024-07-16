#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to a new string containing all arguments, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *str;
	
	if (ac == 0 || av == NULL)
	return (NULL);
	len = 0;
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	len++;
	len++;  
	}
	len++;
	str = (char *)malloc(len * sizeof(char));
	if (str == NULL)
	return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
	str[k++] = av[i][j];
	}
	str[k++] = '\n';
	}
	str[k] = '\0';
	
	return (str);
}
