#include "main.h"

int test_plndrm(char *s, int i, int len);
int _strng_lngth(char *s);

/**
 * is_palindrome - test a string is palindrome
 * @s: string will reverse it
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (test_plndrm(s, 0, _strng_lngth(s)));
}

/**
 * _strng_lngth - return string length 
 * @s: string to return the length 
 *
 * Return: length of the string
 */
int _strng_lngth(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strng_lngth(s + 1));
}

/**
 * test_plndrm - test character with recursion for palindrome
 * @s: string to test it
 * @num: counter 
 * @lnght: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int test_plndrm(char *s, int num, int lnght)
{
	if (*(s + num) != *(s + lnght - 1))
		return (0);
	if (num >= lnght)
		return (1);
	return (test_plndrm(s, num + 1, lnght - 1));
}
