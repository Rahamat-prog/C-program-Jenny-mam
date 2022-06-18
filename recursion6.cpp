#include<stdio.h>
#include<conio.h>
void display(int a)
{
    if(a<1)
    return;
    else
    printf("%d",a);
    display(a/2);
    printf("%d",a);
}
int main()
{
    display(10);
}