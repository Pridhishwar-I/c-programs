#include<stdio.h>
int  main()
{
    int n,total=0;
    printf("enter till how many num you want as sum : ");
    scanf("%d",&n);
    for(int i=0;i<=n;++i)
    {
        total=i+total;
    }
    printf("the total is : %d",total);
    return 0;
}
