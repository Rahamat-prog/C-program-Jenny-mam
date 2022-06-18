#include<stdio.h>
#include<conio.h>
#include<stdlib.h>//wild pointer
int main()
{
    //int *ptr;
    //printf("%d\n",*ptr);//uninitialised pointer
    
    int *ptr=NULL;//out come of the wild pointer
    printf("%d",ptr);
return 0;
}