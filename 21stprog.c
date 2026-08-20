#include<stdio.h>
int main()
{
    int a=0,b=1,s,n;
    printf("enter the no of num you want : ");
    scanf("%d",&n);
    for(int i=0;i<=n;++i)
    {
        s=a+b;
        printf("%d\n",s);
        a=b;
        b=s;
    }
    return 0;
}
