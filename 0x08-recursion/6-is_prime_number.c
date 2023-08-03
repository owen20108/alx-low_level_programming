#include "main.h"

/**
 * is_prime_number - check for integer number is prime
 * @n: integer
 *
 * Return: 1 for prime 0 for not
 */

int is_prime_number(int n)
{
	int num = n / 2;

	if (n <= 1)
		return (0);
	return (getprime(n, num));
}

/**
 * getprime - check if n is prime
 * @n:  integer
 * @num :  counter begin with half of n.
 *
 * Return: 1 if prime 0 if not
 */

int getprime(int n, int num)
{
	if (num  == 1)
		return (1);
	if (n % num  == 0)
		return (0);
	num--;
	return (getprime(n, num));
}
