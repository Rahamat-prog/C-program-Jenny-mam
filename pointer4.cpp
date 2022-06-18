#include<stdio.h>
#include<conio.h>
int main()
{
    int a=5;
    int *p=&a;
    p=p+1;
    printf("%d",*p);
    
return 0;
}