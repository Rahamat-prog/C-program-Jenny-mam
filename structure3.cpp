#include<stdio.h>
#include<conio.h>
struct  student
{
    int rollno;
    char name[20];
    float marks;
};
int main()
{
    struct student s={1,"jenny",90};
    struct student *ptr=&s;
    printf("info for s student:\n");
    printf("Roll no=%d\n",(*ptr).rollno);
    printf("Name=%s\n",(*ptr).name);
    printf("marks=%f",(*ptr).marks);

}
