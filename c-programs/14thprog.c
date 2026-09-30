#include<stdio.h>
int main()
{
    int a,sum=1;
    printf("enter the num of to find factorial : ");
    scanf("%d",&a);
    for(int i=1;i<=a;++i)
    {
        sum=sum*i;
    }
    printf("the sum till the factorial is : %d",sum);
    return 0;
}

