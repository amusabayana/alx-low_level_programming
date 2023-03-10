#include <stdio.h>
#include "main.h"

/**
* main - program that prints the number of arguments passed into it
* @argc: the nymber of arguments
* @argv: the arrray full of arguments
* Return: 0 for success
*/

int main(int argc, char *argv[])
{
(void) argv; /*tells the program to ignore argv*/
printf("%d\n", argc - 1);
return (0);
}
