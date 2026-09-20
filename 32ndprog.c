#include<stdio.h>
int binarysearch(int val,int size,int ar[])
{
    int high=size;
    int low =0;
    while(low<=high)
    {
         int mid=(low+high)/2;
        if(val==ar[mid])
        {
            return mid;
        }
        else if(ar[mid]<val)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;
}
int main()
{
    int ar[10];
    int size=10;
    int value;
    printf("enter the numbers in sorted order\n " );
    for(int i=0;i<10;++i)
    {
        printf("enter a number : " );
        scanf("%d",&ar[i]);
    }
    printf("enter the number you want to search : ");
    scanf("%d",&value);
    int a=binarysearch(value,size,ar);
    if(a==-1)
    {
        printf("the given value : %d is not found",value);
    }
    else
    {
        printf("the entered num : %d is found in the index value : %d",value,a);
    }
}

