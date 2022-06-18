#include<stdio.h>//problem on pointer
#include<conio.h>
int main()
{
    char str[]={"Welcome to jenny's lacture"};
    char *ptr=str;
    printf("%c\n",*ptr);
    printf("%c\n",*(ptr++ +1));
    printf("%c\n",*((ptr-- +5)-1)+3);
    printf("%c\n",*(++ptr +10)-32);
    printf("%c\t%c\t%c",*ptr,*++ptr,*--ptr);
    
return 0;
}