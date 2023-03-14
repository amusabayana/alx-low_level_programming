#include <stdio.h>
#include "main.h"

/*
 * main- prints all arguments the function  receives
 * main - prnts arguments that are received
 * @argc: stores the number of arguments
 * @argv: stores the array of arguments made
 * Return: always return 0 for success
 */

int main(int argc, char *argv[])
/*main -prints all arguments that are recieved*/
{
int x;
for (x = 0; x < argc; x++)
{
printf("%s\n", argv[x]);
}
return (0);
}
