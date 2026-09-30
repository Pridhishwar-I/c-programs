#include<stdio.h>
int main()
{
    int arr[5]={64,34,25,12,22};
    int size=5;
    int a=0;
    while(a<=5)
    {
        a++;
        for(int i=0;i<size;++i)
        {
            if(size==size-1)
            {
                if(arr[i]<arr[i+1])
                {
                    int x=arr[i];
                    int y=arr[i+1];
                    arr[i]=y;
                    arr[i+1]=x;
                }
            }
        }
        size=-size;
    }
    for(int i=0;i<5;++i)
    {
        printf("%d\n",arr[i]);
    }
}