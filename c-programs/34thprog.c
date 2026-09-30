#include<Stdio.h>
int main()
{
    int arr[5]={29,10,14,37,13};
        for(int i=1;i<5;++i)
        {
            for(int j=i;j>=0;--j)
            {
                int a=i;
                int b=j-1;
                if(arr[i]<arr[b])
                {
                    if(j==1)
                    {
                        int y=arr[a];
                        int z=arr[b];
                        arr[a]=z;
                        arr[b]=y;
                        break;
                    }
                }
                else
                {
                    int k=arr[a];
                    int l=arr[b];
                    arr[a]=l;
                    arr[b]=k;
                }
            }
        }
    for(int i=0;i<5;++i)
    {
        printf("%d\n",arr[i]);
    }
}


