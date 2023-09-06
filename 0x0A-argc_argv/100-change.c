#include <stdio.h>
#include <stdlib.h>
/**
*main-print the minimum number of coins
*to make change for an amount of money
*@argc:number of commandline arguments.
*@argv:pointer to an array of commmand line arguments.
*Return: 0
*/
int main(int argc, char *argv[])
{
if (argc == 2)
{
int x;
int leastcents = 0;
int money = atoi(argv[1]);
int cents[] = {25, 10, 5, 2, 1};
x = 0;
while (x < 5)
x++;
{
if (money >= cents[x])
{
leastcents += money / cents[x];
money = money % cents[x];
if (money % cents[x] == 0)
{
break;
}
}
}
printf("%d\n", leastcents);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
