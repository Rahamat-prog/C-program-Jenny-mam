#include<stdio.h>
#include<conio.h>//function
void sum()//function defination
{
int a,b,sum=0;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
sum=a+b;
printf("sum=%d\n",sum);
}
int main()
{
    sum();//function calling.

    printf("write\n");
    printf("hellow world\n");
    sum();
}