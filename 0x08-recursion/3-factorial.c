#include "main.h"

/**
 * factorial - recursively return the factorial of a number
 * @n: number return its the factorial
 * Return: factorial  n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

