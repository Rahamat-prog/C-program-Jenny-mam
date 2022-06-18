#include<stdio.h>//prog. to concatenate of two string
#include<conio.h>
#include<string.h>
int main()
{
    char s1[30]="\"Rahamat\"";
    char s2[30]="Shaikh";
    strcat(s1,s2);
    printf("%s",s1);

return 0;
}