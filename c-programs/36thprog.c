#include<stdio.h>
int main()
{
    int n;
    int first=0,second=0;
    printf("enter the size of an array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;++i)
    {
        printf("enter a element %d : ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;++i)
    {
        if(arr[i]>first || arr[i]==first)
        {
            if(arr[i]==first)
            {
                continue;
            }
            else
            {
                second=first;
                first=arr[i];
            }
        }
        else if(arr[i]>second)
        {
            second=arr[i]; 
        }
    }
    printf("the 2nd largest element is : %d",second);
}

