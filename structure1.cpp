#include<stdio.h>//this the use of structure.
#include<conio.h>
struct student
{
    int a;
    char b;
    float c;
};
int main()
{
    struct student s={1,'r',4.2};
    {
        printf("%d\t%c\t%f",s.a,s.b,s.c);
    };
    
}
