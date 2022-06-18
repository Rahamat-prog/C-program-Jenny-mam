//write a prog. to read marks of five stu. and 
// calculate sum and avg.
#include<stdio.h>
#include<conio.h>
int main()
{
int i;
int sum=0; float avg; int marks[5];
for(i=0;i<5;i++)
{
    scanf("%d",&marks[i]);
}
for(i=0;i<5;i++)
{
    sum=sum+marks[i];
}
    avg=sum/5;
    printf("sum=%d\n",sum);
    printf("avg=%f",avg);

    return 0;
}