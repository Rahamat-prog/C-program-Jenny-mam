#include<stdio.h>//WAP to read two arrays of sixe 5 
               //& print sum of this two arrays into 3rd arrays.
#include<conio.h>

int main()
{
    int i,a[5],b[5],c[5];
    printf("Enter 1st arrays elements");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    printf("Enter 2nd arrays elements");
    for(i=0;i<5;i++)
    scanf("%d",&b[i]);
    for(i=0;i<5;i++)
    {
     c[i]=a[i]+b[i];
printf("\n3rd arrays element at index %d is %d",i,c[i]);
printf("\n sum of two arrays are %d",c[i]);
    }
        return 0;   
}