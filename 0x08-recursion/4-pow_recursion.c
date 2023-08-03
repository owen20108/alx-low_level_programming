#include "main.h"

/**
 * _pow_recursion  - recursively return value of x raised to the power of y
 * @x: the value for raise
 * @y: the power
 * Return: power result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

