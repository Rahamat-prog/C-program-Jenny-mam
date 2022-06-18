#include<stdio.h>
#include<conio.h>//direct recursion write meself.
int sum(int x)
{
    if(x==1)
    return x;
    else
    return sum(x-1);
}
int main()
{
    int a;
    a=sum(5);
    printf("%d",a);
}
