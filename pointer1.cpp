#include<stdio.h>//print value using pointer.
#include<conio.h>
int main()
{
    int a[]={1,1,3,2,68,0,56};
    int *p;
    p=&a[3];
    //printf("%d\n",*--p);
   // printf("%d",*p);
    printf("%d\t%d\t%d\t",*--p,*--p,*--p);
    printf("%d\t%d\t%d\t",--(*p),(*p)++,(*p)++);
return 0;
}