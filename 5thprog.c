#include<stdio.h>
int main()
{
    //circle
    int r;
    printf("enter the radius of the circle : ");
    scanf("%d",&r);
    float arc=2*3.14*r;
    printf("\nthe area of the circle is : %f",arc);
     
     //rectangle
    int l,b;
    printf("\nenter the length of the rectangle : ");
    scanf("%d",&l);
    printf("enter the breadth of the rectangle : ");
    scanf("%d",&b);
    int arr=l*b;
    printf("\nthe area of rectangle is  : %d ",arr);

     //triangle
    int h,br;
    printf("\nenter the height of triangle : ");
    scanf("%d",&h);
    printf("enter the breadth of triangle : ");
    scanf("%d",&br);
    float art=0.5*h*br;
    printf("\nthe area of the tiangle is : %f ",art);
     
    return 0;
}


        
    