#include<stdio.h>
int main()
{
    int c;
    printf("enter the celcius : ");
    scanf("%d",&c);
    float f=(c*1.8)+32;
    printf("the entered celcius  in fahrenheit is : %ff",f);
    return 0;
}