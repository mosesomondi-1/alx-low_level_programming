#include <stdio.h>
/**
 *main - program that prints all the numbers of base 16 in lowercase
 *followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
int i;

for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
for (i = 'a'; i <= 'f'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
