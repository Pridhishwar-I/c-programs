#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a num : ");
    scanf("%d",&a);
    printf("enter a num : ");
    scanf("%d",&b);
    printf("enter a num : ");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("the greatest num is : %d ",a);
    }
    else if(b>c && c<b)
    {
        printf("the greatest num is : %d ",b);
    }
    else if(c>a && c>b)
    {
        printf("the greatest num is : %d ",c);
    }
    else
    {
        if(a==b)
        {
            if(a==b && b>c)
            {
                printf("the greatest num is : %d ",a);
            }
            else
            {
                printf("the greatest num is : %d ",c);
            }
        }
        else if(a==b)
        {
             if(a==b)
             {
                 if(a==b && b>c)
                 {
                     printf("the greatest num is : %d ",a);
                 }
                 else
                  {
                    printf("the greatest num is : %d ",c);
                  }
            }
        }
        else
        {
            if(c==a)
            {
                if(c>b)
                {
                    printf("the greatest num is : %d",a);
                }
                else
                {
                    printf("the greatest num is : %d",b);
                }
            }
        }
    }
}
   
        
    



    

