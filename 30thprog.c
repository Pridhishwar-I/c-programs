#include<stdio.h>
int main()
{
    int ar[10];
    for(int i=0;i<10;++i)
    {
        printf("enter a number : ");
        scanf("%d",&ar[i]);
    }
     for(int i=10;i>=0;--i)
    {
        printf("the reverse of an array is : " );
        printf("%d\n",ar[i]);
    }
}

