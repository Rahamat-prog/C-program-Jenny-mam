#include<stdio.h>//print pointer assignment.
#include<conio.h>
int main()
{
    int a=10,b=11;
    int *p,*q;
    p=&a;
    q=p;
    printf("a=%d\t",a);
    printf("a=%d\t",*p);
    printf("a=%d",*q);
return 0;
}