#include "main.h"

/**
 * _sqrt_helper - helper function to calculate square root recursively
 * @n: the number to calculate square root of
 * @guess: current guess for the square root
 *
 * Return: natural square root of n, -1 if n does not have a natural square root
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	return guess;
    
	if (guess * guess > n)
	return -1;
   
	return _sqrt_helper(n, guess + 1);
}
/**
 * _sqrt_recursion - computes the natural square root of a number
 * @n: the number to calculate square root of
 *
 * Return: natural square root of n, -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	return _sqrt_helper(n, 0);
}
