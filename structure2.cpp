//array of structure
#include<stdio.h>
#include<conio.h>
struct student
{   
    int rollno;
    char name[20];
    float marks;
};
int main()
    {
    
        struct student s[3];
       for(int i=0;i<3;i++)
       {
           printf("Enter roll:");
           
           scanf("%d",&s[i].rollno);
           
           printf("Enter name:");
           
           scanf("%s",s[i].name);
           
           printf("Enter marks:");
           
           scanf("%f",&s[i].marks);
           printf("\n");
       }
           
        
        for(int i=0;i<3;i++)
        {
            printf("Roll no=%d\n",s[i].rollno);
             printf("Name=%s\n",s[i].name);
            printf("Marks=%f\n",s[i].marks);
            printf("\n");
        
       }
       
    }