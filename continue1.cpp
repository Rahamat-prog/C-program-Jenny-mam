//print sum of 5 numbers if user input negative no 
//than not count and give sum. 
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
     continue;
 }
 sum=sum+a;
}
printf("sum=%d",sum);
return 0;
getch();
}