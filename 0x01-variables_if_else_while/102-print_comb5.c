#include <stdio.h>
/**
 *main - Prints all possible combinations of two two-digit numbers
 *ranging from 0-99 separated by a comma followed by a space
 *numbers should be printed in ascending order
 * Return: Always 0.
 */
int main(void)
{
int k, l;

for (k = 0; k < 100; k++)
{
for (l = 0; l < 100; l++)
{
if (k < l)
{
putchar((k / 10) + 48);
putchar((k % 10) + 48);
putchar(' ');
putchar((l / 10) + 48);
putchar((l % 10) + 48);
if (k != 98 || l != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
