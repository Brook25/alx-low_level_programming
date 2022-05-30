#include "main.h"
#include <stdio.h>
/**
 * error_file - checks if a file can be opened
 * @file_from: from file
 * @file_to: to file
 * @argv: arg vector
 * Return: no return
 */
void error_file(int file_from, int file_to, char *argv[])
{
if (file_from == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
/**
 * main - check code
 * @argc: num of args
 * @argv: agument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int file__from, file__to, err_close;
ssize_t numchars, nwr;
char buf[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
exit(97);
}
file__from = open(argv[1], O_RDONLY);
file__to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
error_file(file__from, file__to, argv);
numchars = 1024;
while (numchars == 1024)
{
numchars = read(file__from, buf, 1024);
if (numchars == -1)
error_file(-1, 0, argv);
nwr = write(file__to, buf, numchars);
if (nwr == -1)
error_file(0, -1, argv);
}
err_close = close(file__from);
if (err_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file__from);
exit(100);
}
err_close = close(file__to);
if (err_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file__from);
exit(100);
}
return (0);
}
