#include<stdio.h>
int main()
{
    for(int i=0;i<6;++i)
    {
        for(int j=i;j!=0;--j);
        {
            for(int k=5;k!=0;--k)
            {
                printf("\t\t");
            }
        }
        printf("*");
        printf("\n\n");
    }
}