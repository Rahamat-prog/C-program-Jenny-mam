#include<stdio.h>//pointer arthmetic(subtraction).
#include<conio.h>
int main()
{
    int d;
    int a[]={50,1,-1,10,11};
    int *p=&a[0];
    int *q=&a[4];
    d=p-q;
    d=q-p;
    *p=25;
    q=q-3;
    p=p+3;
    printf("q-p=%d\n",q-p);
    printf("p-q=%d\n",p-q);
    printf("value=%d\n",*q);
    q=q-2;
    printf("value=%d\n",*q);
    p=p+2;
    printf("value=%d",*p);

return 0;
}