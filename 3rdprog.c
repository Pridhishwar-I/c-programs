#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a number 1 : ");
    scanf("%d",&a);
    printf("enter an num 2 : ");
    scanf("%d",&b);
    int c=a;
    a=b;
    b=c;
    printf("the first entered value is : %d\n",a);
    printf("the second entered value is  : %d",b);
    return 0;
}
