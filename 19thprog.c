#include<stdio.h>
int main()
{
int d1,d2,d3,d4,s=0,a;
printf("enter a three digit number : ");
scanf("%d",&a);
d1=a/100;
d3=a%10;
d4=a%100;
d2=d4/10;
int b;
s=d1*d1*d1+d2*d2*d2+d3*d3*d3;
if(s==a)
{
    printf("the entered num %d is amstrong  ",a);
}
else
{
    printf("the entered num %d is not amstrong ",a);
}
return 0;
}
