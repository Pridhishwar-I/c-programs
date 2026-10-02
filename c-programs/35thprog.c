#include<stdio.h>
int main()
{
    int n;
    int m=0;
    printf("enter the size of an array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;++i)
    {
        printf("enter a element %d : ",i);
        scanf("%d",&arr[i]);
    }
    int a=0;
    int big=0,b=0;
    while(a<n)
    {
        if(arr[a]>m)
        {
           big=arr[a];
           int b=a;
        }
        a++;
    }
    arr[b]=0;
    for(int i=0;i<n;++i)
    {
        if(arr[a]>m)
        {
           printf("the 2nd largest element is : %d",big);
           break;
        }
    }

}
