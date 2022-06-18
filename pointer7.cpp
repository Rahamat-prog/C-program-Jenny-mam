#include<stdio.h>//pointer arthmetic(increment/decrement).
#include<conio.h>
int main()
{
    int a[]={3,2,67,0,56};
    int *p;
    p=a;
    p++;
    printf("%d\t",*p);
    printf("%d\t",*p++);
    printf("%d",*++p);
return 0;
}