#include<stdio.h>//reverse a string insted of strrev()funcrion.
#include<conio.h>
#include<string.h>
int main()
{
    char s1[30],c;
    int i,l;
    printf("Enter a name:");
    gets(s1);
    l=strlen(s1);
    for(i=0;i<l/2;i++)
    {
        c=s1[i];
        s1[i]=s1[l-1-i];
        s1[l-1-i]=c;
    }
        printf("%s",s1);
    

return 0;
}