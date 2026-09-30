#include<stdio.h>
int main()
{
    int a;
    printf("enter a num : ");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("the num you entered is even");
    }
    else
    {
        printf("the num you entered is odd ");
    }
    return 0;
}