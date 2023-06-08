
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* check_num - check string there are digit
* @str: array of strings
* Return: 0 + success
*/

int check_num(char *str)
{
unsigned int count = 0;
while (count < strlen(str))

{
if (!isdigit(str[count]))
{
return (0);
}

count++;
}
return (1);
}

/**
* main - Prints the name of the program
* @argc: Counts the  arguments
* @argv: Args
* Return:  0 = Success
*/

int main(int argc, char *argv[])
{

int count;
int string_to_int;
int tsum = 0;

count = 1;
while (count < argc)
{
if (check_num(argv[count]))

{
string_to_int = atoi(argv[count]);
tsum += string_to_int;
}

else

{
printf("Error\n");
return (1);
}
count++;
}
printf("%d\n", tsum);

return (0);
}
