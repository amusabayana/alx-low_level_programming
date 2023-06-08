#include <stdio.h>
/**
 * puts2 - prints every other character of a string starting with 
 * the first character followed by a new line
 * @str: initial string
 * return - final print
 *
 * */

void puts2(char *str)
{
int x = 0;
int w = 0;
char *y = str;
int a;

while (*y != '\0')
{
y++;
x++;
}
w = x - 1;
for (a = 0 ; a <= w ; a++)
{
if (a % 2 == 0)
{
_putchar(str[a]);
}
}
_putchar('\n');
}
