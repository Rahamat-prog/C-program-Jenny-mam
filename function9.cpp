#include<stdio.h>//pasing arrays as a argument.
#include<conio.h>

    int avg(int[],int);
    int main()
    {
        int average;
        int marks[5]={10,15,20,30,45};
        average=avg(marks,5);
        printf("avg is=%d",average);
    }
        int avg(int marks[],int a)
        {
            int i,sum=0,average=0;
            for(i=0;i<a;i++)
            {
                sum=sum+marks[i];
            }
            average=sum/a;
            return average;

        }
