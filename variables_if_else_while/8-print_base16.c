#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int xx;
char lettre;
for (xx = 0; xx < 10; xx++)
{
putchar('0' + xx);
}
for (lettre = 'a'; lettre <= 'f'; lettre++)
{
putchar(lettre);
}
putchar('\n');
return (0);
}
