#include<stdio.h>//function no argument with return type
#include<conio.h>
int sum (void);
int main()
{
    int s;
    sum();
    s=sum();
    printf("%d\n",s);
}
int sum()
{
    int a=5,b=7;
    
    return a+b;
}


