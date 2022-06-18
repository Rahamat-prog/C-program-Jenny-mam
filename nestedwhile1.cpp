//print number using nested while loop.
#include<stdio.h>
#include<conio.h>
int main()
{
 int i=0,j=1;
 while(i<3)
 {
     while(j<=3)
     {
         printf("%d\n",j++);
         //printf("\n");
     }
     printf("%d\n",i++);
 }
 
    return 0;
    getch();
}
