#include<stdio.h>//tail recursion.
#include<conio.h>
void display(int a)
{
    if(a<1)
    return;
    else
    
    printf("%d",a);
    printf(" ");
    display(a/2);
    printf(" ");
    printf("%d",a);//for this line its non tail recursion

}
int main()
{
    display(10);
}