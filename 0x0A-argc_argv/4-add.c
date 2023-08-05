#include <stdio.h>
#include <stdlib.h>

/**
 * main - add two numbers
  * @argc:int
  * @argv:array of string
  * Return: sum of all numbers
 */

int main(int argc, char **argv)
{
int cntr, nmbr, suma = 0;
char *arr;


if (argc < 2)
{
printf("0\n");
return (0);
}


for (cntr = 1; argv[cntr]; cntr++)
{
n = strtol(argv[cntr], &arr, 10);
if (*arr)
{
printf("Error\n");
return (1);
}
else
{
suma += nmbr;
}
}
printf("%d\n", suma);


return (0);
}

