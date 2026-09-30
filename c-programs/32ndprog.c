#include<stdio.h>
int main()
{
    int arr[8]={0,1,2,3,4,5,6,7};
    int b=0;
    int l=0,h=7;
    while(l<=h)
    {
        if(arr[b]==5)
        {
            printf("the num found in index of : %d ",b);
        }
        else if(arr[l+h/2]<5)
        {
            l=l+1;
        }
        else
        {
            h=h-1;
        }
    }
}
