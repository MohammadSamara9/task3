#include <stdio.h>
#include <stdlib.h>

int main()
{
int x;
printf("please inter the value of x \n");
scanf("%d", &x);

if(x%7==0&&x%3!=0)
{
    printf("divisible");
}
else
{
    printf("not divisible");
}








    return 0;
}
