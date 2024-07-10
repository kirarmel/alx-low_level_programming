#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
	return 0;
	else
	return 1 + _strlen(s + 1);
}

/**
 * is_palindrome_check - helper function to check if a substring is palindrome
 * @s: string to check
 * @start: starting index of the substring
 * @end: ending index of the substring
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome_check(char *s, int start, int end)
{
	if (start >= end)
	return 1;
	if (s[start] != s[end])
	return 0;
	return is_palindrome_check(s, start + 1, end - 1);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);
	if (len <= 1)
	return 1;
	return is_palindrome_check(s, 0, len - 1);
}
