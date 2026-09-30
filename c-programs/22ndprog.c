#include<stdio.h>
int main()
{
    int a,b,v,a1,b1;
   printf("enter a postive small num 1 :");
   scanf("%d",&a);
   printf("enter a postive num big num : ");
   scanf("%d",&b);
   while(b != 0)
    {
        v= a % b;
        a1 = b;
        b1 = v;
}
a1=a;
b1=b;
int gcd = a1;
int lcm=(a*b)/gcd;
printf("the gcd is : %d",gcd);
printf("the lcm is : %d",lcm);
return 0;
}



