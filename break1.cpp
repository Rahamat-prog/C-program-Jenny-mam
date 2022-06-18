//print sum of fives numbers but if user input less than 1 than exit the loop and do sum.
#include<stdio.h>
#include<conio.h>
int main()
{
 int i,a,sum=0;
 for(i=1;i<=5;i++)
 {
     printf("Enter a number");
     scanf("%d",&a);
    if(a<0)
    {
        break;
    }
    sum=sum+a;
 }
   printf("%d\n",sum);
 
    return 0;
    getch();
}