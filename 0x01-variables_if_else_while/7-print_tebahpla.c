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
char m;
for (m = 'z'; m >= 'a'; m--)
{
    putchar(m);
    printf("\n");
}

return (0);
}
