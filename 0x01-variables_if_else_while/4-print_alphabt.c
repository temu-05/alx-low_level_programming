#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char m, n, o;
n = 'e';
o = 'q';
for (m = 'a'; m <= 'z'; m++)
{
if (m != n && m != o)
putchar(m);
}
printf("\n");
return (0);
}
