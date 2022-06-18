#include<stdio.h>//call by value
#include<conio.h>
void sum(int,int);
int main()
{
    int x=5,y=7;
    sum(x,y);
}
void sum(int x,int y)
{
    x=7;
    y=5;
    printf("x=%d,y=%d",x,y);
}
