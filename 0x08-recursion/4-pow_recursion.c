#include "main.h"

/**
 * _pow_recursion - computes the power of a number
 * @x: the base
 * @y: the exponent
 *
 * Return: x raised to the power of y, -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	return -1;
   
	if (y == 0)
	return 1;
    
 
	return x * _pow_recursion(x, y - 1);
}
