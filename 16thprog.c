#include<stdio.h>
int main()
{
int d1,d2,d3,d4,sum=0,a;
printf("enter a three digit number : ");
scanf("%d",&a);
d3=a%10;
d1=a/100;
d4=a%100;
d2=d4/10;
sum=d1+d2+d3;
printf("the sum of the digits is : %d",sum);
return 0;
}




