#include<stdio.h>//use of malloc function.
#include<conio.h>
#include<stdlib.h>
int main()
{
    int *ptr=(int*)malloc(4);
    *ptr=67;
    printf("%d",*ptr);

return 0;
}