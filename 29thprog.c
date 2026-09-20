   #include<stdio.h>
   int main()
   {
    int ar[10];
    int sum=0;
    int total=0;
    for(int i=0;i<10;i++)
    {
        printf("enter a number : ");
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<10;i++)
    {
        sum=sum+ar[i];
    }
    printf("the sum of the array elements is : %d \n",sum);
    total=sum/10;
    printf("the avg of the array elements is : %d ",total);
}