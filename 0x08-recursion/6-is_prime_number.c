#include "main.h"

/**
 * is_divisible - checks if n is divisible by any number from 2 to a
 * @n: the number to check
 * @a: the divisor to check up to
 *
 * Return: 1 if n is divisible by a number other than 1 and itself, otherwise 0
 */
int is_divisible(int n, int a)
{
	if (n <= 2)
	return (n == 2);
	if (n % a == 0)
	return 0;
	if (a * a > n)
	return 1; 

	return is_divisible(n, a + 1);
}

/**
 * is_prime_number - checks if a number is a prime number
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	return 0;
    
	return is_divisible(n, 2);
}
