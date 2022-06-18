#include<stdio.h>//printf and puts function in string.
#include<conio.h>
int main()
{
    char name[30];
    printf("Enter a name: ");
    scanf("%s",name);
    printf("%10.5s",name);
    printf("%.5s",name);
    puts(name);
    puts(name);
    printf("%s",&name[2]);

    
return 0;
}