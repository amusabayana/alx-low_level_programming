#include "main.h"
/**
* print_rev - print the string in reverse
* @s: string to be reverse
* return: 0
*/
void print_rev(char *s)
{
int xyz = 0;
int o;
while (*s != '\0')
{
xyz++;
s++;
}
s--;
for (o = xyz; o > 0; o--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}

