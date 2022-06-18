#include<stdio.h>//pointer to pointer.
#include<conio.h>
int main()
{
    int a=10;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    printf("value of a =%d\t%d\n",a,*p);
    printf("address of a=%d\t\n",&a);
    printf("value of a=%d\n",*(*q));
    printf("value of a=%d",*(*(*r)));

return 0;
}