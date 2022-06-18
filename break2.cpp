//print sum of many numbers but if enter negative num
// than exit and count sum.
#include<stdio.h>
#include<conio.h>
int main()
{
 int a,sum=0;
 while(1)
 {
     printf("Enter a number");
     scanf("%d",&a);
     if(a<0)
     {
         break;
     }
     sum=sum+a;
 }
 printf("%d",sum);

    return 0;
    getch();
}