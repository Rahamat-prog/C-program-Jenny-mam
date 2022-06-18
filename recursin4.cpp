#include<stdio.h>
#include<conio.h>//indirect recursion write myself.
int sum1(int),sum2(int);
int main()
{
    printf("%d",sum1(5));
}
int sum1(int x)
{
    if(x<1)
    return 1;
    else
    return sum2(x-1);
}
int sum2(int x)
{
    if(x<1)
    return 1;
    else
    return sum1(x-1);
}

