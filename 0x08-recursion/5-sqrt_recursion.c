#include "main.h"

/**
 * _sqrt_recursion - calculate sqrt of a number use recursivly
 * @n: integer
 * Return: result of square root for n
 */

int _sqrt_recursion(int n)
{
	int num = 0;

	return (getsqr(n, num));
}

/**
 * getsqr - search square and return value
 * @n:  integer
 * @num:  counter intialized to 0.
 * Return: result square root of n
 */

int getsqr(int n, int num)
{
	if ((num * num) > n)
		return (-1);
	if ((num * num) == n)
		return (num);
	return (getsqr(n, (num + 1)));
}
