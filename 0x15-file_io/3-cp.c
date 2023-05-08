#include "main.h"
/**
 * clos - close error
 * @fd: the file descriptor to print
 */
void clos(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %i", fd);
	exit(100);
}
/**
 * main - copies content of one file to another
 * @ac: arg count
 * @a: argument pointers
 * Return: number of successfully copied chars
 */
int main(int ac, char **a)
{
	int fid1, fid2, rd1 = 1, wr1, cle, cle2;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", a[0]);
		exit(97);
	}
	fid1 = open(a[1], O_RDONLY);
	if (fid1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", a[1]);
		exit(98);
	}
	fid2 = open(a[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
while (rd1 > 0)
{
rd1 = read(fid1, buf, 1024);
if (rd1 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", a[1]);
exit(98);
}
wr1 = write(fid2, buf, rd1);
if (wr1 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", a[2]);
exit(99);
}
}
	cle = close(fid1);
	if (cle == -1)
		clos(fid1);
	cle2 = close(fid2);
	if (cle2 == -1)
		clos(fid2);
	return (wr1);
}
