#include<stdio.h>//print arthmetic(addition)using pointer.
#include<conio.h>
int main()
{
    int a[5]={0,1,-1,10,11};
    int *p=&a[0];
    printf("%d",*p);
    p=p+2;
    printf("%d",*p);
return 0;
}