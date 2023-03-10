#include <stdio.h>
#include "main.h"

/*
 * main - prints all arguments that is recieves
 * @argc: stores the number of arguments
 * @argv: stores the array of arguments made
 * Return: always return 0 for success
 */

int main(int argc, char **argv[])
{
for (int x = 0; x < argc, x++)
{
print("%d\n", argv[x]);
}
return (0);
}
