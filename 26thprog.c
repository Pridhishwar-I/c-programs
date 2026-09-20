#include<stdio.h>
int main()
{
    for(int i=5;i!=0;--i)
    {
        for(int j=i;j!=0;--j)
        {
            printf("\t");
        }
        if(i==5)
        {
            printf("*");
            printf("\n");
        }
        else if(i==4)
        {
            printf("*\t*\t*");
            printf("\n");
        }
        else if(i==3)
        {
             printf("*\t*\t*\t*\t*");
             printf("\n");
        }
        else if(i==2)
        {
            printf("*\t*\t*\t*\t*\t*\t*");
            printf("\n");
        }
        else if(i==1)
        {
            printf("*\t*\t*\t*\t*\t*\t*\t*\t*");
            printf("\n");
        }
    }
    for(int i=1;i<6;++i)
    {
        printf("\n");
        if(i==1)
            {
                printf("*\t*\t*\t*\t*\t*\t*\t*\t*");
                printf("\n");
            }
        else if(i==2)
        {
            printf("*\t*\t*\t*\t*\t*");
            printf("\n");
        }
        else if(i==3)
        {
            printf("*\t*\t*\t*");
            printf("\n");
        }
        else if(i==4)
        {
            printf("*\t*");
            printf("\n");
        }
        else
        {
            printf("*");
            printf("\n");
        }
    }
}