#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    int ar[n];
    printf("enter only non-identical elements \n\n");
    for(int i=0;i<n;++i)
    {
        printf("enter the element  of index %d : ",i);
        scanf("%d",&ar[i]);
    }
    int a,b=0;
    printf("enter the element you want to search : ");
    scanf("%d",&a);
    for(int i=0;i<n;++i)
    {
        if(a==ar[i])
        {
            b=i;
            break;
        }   
    }
    if(b==0)
    {
        printf("the element : %d is not found ",a);
    }
    else
    {
        printf("the element : %d is found \n ",a);
        printf("the index value is : %d",b);
    }
}
        