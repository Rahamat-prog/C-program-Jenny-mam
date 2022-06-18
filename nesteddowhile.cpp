#include<stdio.h>
#include<conio.h>
int main()
{
 int i=1,j=3;
 do 
 {
     do
     {
       printf("%d\n",j);
       j--;
     } while (j>0);
     i++;
     printf("%d\n",i);
 }
 while(i<4);
 
    return 0;
    getch();
}