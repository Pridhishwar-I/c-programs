#include<stdio.h>
int main()
{
    int n;
    printf("entre the no of starts you want : ");
    scanf("%d",&n);
    for(int i=0;i<n;++i)
    {
        printf("*\t");
    }
    printf("\n\n");
    for(int i=0;i<n-2;++i)
    {
        printf("*");
        printf("\t\t\t*");
        printf("\n\n");
    }
    for(int i=0;i<n;++i)
    {
        printf("*\t");
    }
    
    return 0;
}
