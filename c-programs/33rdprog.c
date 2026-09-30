#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    int size=n;
    for(int i=0;i<n;++i)
    {
        printf("enter the element %d : ",i+1);
        scanf("%d",&arr[i]);
        printf("\n");
    }
    int a=0;
    while(a<=n)
    {
        a++;
        for(int i=0;i<size-1;++i)
        {
                if(arr[i]>arr[i+1])
                {
                    int x=arr[i];
                    int y=arr[i+1];
                    arr[i]=y;
                    arr[i+1]=x;
                }
        }
        size=size-1;
    }
    printf("\n\nthe sorted array : \n\n");
    for(int i=0;i<n;++i)
    {
        printf("%d\n",arr[i]);
    }
}