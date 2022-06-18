//function with argument and return type
#include<stdio.h>
#include<conio.h>
int sum(int,int);
int main()
{
    int a,b,c;
    printf("Enter two numbera:");
    scanf("%d%d",&a,&b);
    sum(a,b);
    c=sum(a,b);
    printf("sum=%d",c);
}
int sum(int x,int y)
{
    int s=0;
    s=x+y;
    return s;
}
