#include<stdio.h>
int linearsearch(int val,int ar[],int size)
{
    for(int i=0;i<size;++i)
    {
        if(ar[i]==val)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
int ar[10];
int v;
for(int i=0;i<10;++i)
{
    printf("enter a num : ");
    scanf("%d",&ar[i]);
}
printf("enter the value you want to search :");
scanf("%d",&v);
int a=linearsearch(v,ar,10);
if(a==-1)
{
    printf("the num : %d is not found ",v);
}
else
{
    printf("the num : %d is found in the \n index value : %d  ",v,a);
}
return 0;
}
