#include<stdio.h>
int main()
{
    int p,r,t;
    printf("enter the principal amount borrowed : ");
    scanf("%d",&p);
    printf("enter the rate of interest : ");
    scanf("%d",&r);
    printf("enter the time period of the loan : ");
    scanf("%d",&t);
    int si=(p*r*t)/100;
    printf("the simple interest is : %d",si);
    return 0;
}