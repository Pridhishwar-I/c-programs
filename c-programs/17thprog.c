#include<stdio.h>
int main()
{
int d1,d2,d3,d4,s=0,a;
printf("enter a three digit number : ");
scanf("%d",&a);
d3=a%10;
d1=a/100;
d4=a%100;
d2=d4/10;
int b;
s=d3*100+d2*10+d1*1;
printf("the reverse of the number is : %d",s);
return 0;
}
