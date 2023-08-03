#include "main.h"

int getprime(int n, int num);

/**
 * is_prime_number - check integer is prime number
 * @n: number to test
 *
 * Return: 1 if n  a prime number or 0 if not prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (getprime(n, n - 1));
}

/**
 * getprime - get result if  number  prime recursively
 * @n: number to check
 * @num: counter begin with half of n
 *
 * Return: 1 if n is prime or  0 if not prime
 */
int getprime(int n, int num)
{
	if (num == 1)
		return (1);
	if (n % num == 0 && num > 0)
		return (0);
	return (getprime(n, num - 1));
}
