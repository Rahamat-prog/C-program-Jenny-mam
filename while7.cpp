//while loop not true so print ent of the prog
#include<stdio.h>
#include<conio.h>
int main()
{
 int i=0,ch=1;
while(ch<127 && i==1)
{
    printf("%d  %d\n",i,ch);
    ch++;
}
printf("ent of the prog");
    return 0;
    getch();
}