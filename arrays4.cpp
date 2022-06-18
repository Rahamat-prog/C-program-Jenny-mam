#include<stdio.h>//wap to reat 5 no and count even and odd no.
#include<conio.h>
int main()
{
int i, a[5],even=0,odd=0;
for ( i = 0; i < 5; i++)
{
scanf("%d",&a[i]);
}
for ( i = 0; i < 5; i++)
{
    if (a[i]%2==0)
    {
    
       even= even+1;
    }
    else
    {
    odd=odd+1;
    }
    }
    printf("even elements=%d\n",even);
    printf("odd element=%d",odd);  


return 0;
}