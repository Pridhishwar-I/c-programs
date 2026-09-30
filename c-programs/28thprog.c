#include<stdio.h>
int main()
{
    int ar[10];
    int lar,sma;
    printf("enter 10 numbers for the array \n\n ");
    for(int i=0;i<10;++i)
    {
        printf("enter the number : ");
        scanf("%d",&ar[i]);
    }
    lar=ar[0];
    sma=ar[0];
    for(int i=0;i<10;++i)
    {
        if(ar[i]>lar)
        {
            lar=ar[i];
        }
    }
    for(int i=9;i>=0;--i)
    {
        if(ar[i]<sma)
        {
            sma=ar[i];
        }
    }
    printf("the largest number is : %d \n",lar);
    printf("the smallest number is : %d ",sma);
}
