#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a number 1 : ");
    scanf("%d",&a);
    printf("enter a number 2 : ");
    scanf("%d",&b);

    //addition
    printf("the addition of two num is : %d ",a+b);
     
    // subraction
    printf("\nthe sub of two num is : %d ",a-b);

    //multiplication
    printf("\nthe multiplication of two numbers is : %d",a*b);

    //division
    printf("\nthe division of two numbers is : %f",a/b);

    return 0;
}