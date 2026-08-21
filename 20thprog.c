#include<stdio.h>
int main()
{
    int a;
    printf("enter a num under 11 : ");
    scanf("%d",&a);
    if(a%2==0 && a!=2)
    {
        printf("the entered num : %d is not prime num ",a);
    }
    else if(a%3==0 && a!=3)
    {
        printf("the entered num : %d is not prime num ",a);
    }
    else if(a%5==0 && a!=5)
    {
        printf("the entered num : %d is not prime num ",a);
    }
    else if(a%7==0 && a!=7)
    {
        printf("the entered num : %d is not prime num ",a);
    }
    else
    {
        printf("the entered num : %d is a prime number  ",a);
    }
    return 0 ;
}
