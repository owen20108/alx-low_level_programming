#include "main.h"

int SQRT(int n, int num);

/**
 * _sqrt_recursion - return the natural square root  number recursivly
 * @n: number get square root
 *
 * Return:  result square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (SQRT(n, 0));
}

/**
 * SQRT - recursivly to get the natural
 * square root for  number
 * @n: number to get sqaure root
 * @ num: counter
 *
 * Return:  result square root
 */
int SQRT(int n, int  num)
{
	if (num *  num > n)
		return (-1);
	if (num *  num == n)
		return (num);
	return (SQRT(n,  num + 1));
}
