#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;++i)
    {
        printf("enter the element %d :  ",i);
        scanf("%d",&arr[i]);
    }  
        for(int i=1;i<n;++i)
        {
            int a=arr[i];
            int b=i-1;
            while(b>=0 && arr[b]>a)
            {
                if(a<arr[b])
                {
                    arr[b+1]=arr[b];
                    --b;
                }
            }
            arr[b+1]=a;
        }
         printf("\n\n\nthe sorted list is \n\n\n");
    for(int i=0;i<n;++i)
    {
        printf("%d\n",arr[i]);
    }
    printf("\n");
}


