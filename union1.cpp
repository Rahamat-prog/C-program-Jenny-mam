#include<stdio.h>
union student
{
    int a;
    char b;
    float c;
};
int main()
{
  union student s1;
union student *p=&s1;
s1.a=10;
s1.b='a';
s1.c=60.20;

printf("a=%d\nb=%cb\nc=%fc",(*p).a,(*p).b,(*p).c);

}
