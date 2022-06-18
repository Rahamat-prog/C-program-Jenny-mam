//Function with argument and no return type
#include<stdio.h>
#include<conio.h>
void sum(int,int);
int main()
{
    int a,b;
    sum(7,5);

}
void sum(int x,int y)
{
    x=5;
    y=7;
    printf("%d\t%d",x,y);
}