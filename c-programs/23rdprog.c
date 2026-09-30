#include<stdio.h>
int main()
{
    for(int i=0;i<4;++i)
    {
        printf("*\t");
    }
    printf("\n\n");
    for(int i=0;i<4-2;++i)
    {
        printf("*");
        printf("\t\t\t*");
        printf("\n\n");
    }
    for(int i=0;i<4;++i)
    {
        printf("*\t");
    }
    
    return 0;
}
