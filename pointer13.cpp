#include<stdio.h>
#include<conio.h>
#include<stdlib.h>//dangling pointer.
int main()
{   
    int *ptr=(int*)malloc(4);
    *ptr=10;
    printf("%d\n",*ptr);
    free(ptr);
    printf("%d\n",ptr);
    ptr=NULL;//out come of this dangling
    if(ptr==NULL)
    {
        printf("Null pointer\n");
    }
    else{
        printf("not NULL pointer");
    }
return 0;
}