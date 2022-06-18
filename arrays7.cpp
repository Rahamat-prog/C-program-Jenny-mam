#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,a[3][3],b[3][3],c[3][3],sum;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("print 1st matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
    printf("print 2nd matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("multification is=\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=0;
            for(k=0;k<3;k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            c[i][j]=sum;    
        printf("\t%d",c[i][j]);
        }
    
    printf("\n");
}
    
    
    
return 0;
}