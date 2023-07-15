#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - program that prints the lowercase alphabet in reverse
*followed by a new line
* Return: 0 (Success)
*/
int main(void)
{
char letters, s = '\n';
for (letters = 'z'; letters >= 'a'; letters--)
{
putchar(letters);
}
putchar(s);
return (0);
}
