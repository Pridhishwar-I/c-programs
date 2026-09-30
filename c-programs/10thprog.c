#include<stdio.h>
int main()
{
    int si,ci,d;
    printf("enter the simple interest value : ");
    scanf("%d",&si);
    printf("enter the compound interest value : ");
    scanf("%d",&ci);
    d=ci-si;
    printf("the diff in value is : %d ",d);
    return 0;
}

