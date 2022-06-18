#include<stdio.h>//print length of a string.
#include<conio.h>
#include<string.h>
int main()
{
    char name[30];
    int count=0,i=0;
    printf("Enter name:");
    gets(name);
    count=strlen(name);
    printf("string length is=%d",count);

        
       return 0;
}
    