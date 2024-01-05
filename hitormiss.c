#include<stdio.h>
void main()
{
    int n,sum=0,product=1,default=n;
    printf("enter a positive number");
    scanf("%d",&n);
   // int default=n;
    int a;
    while(n!=0)
    {
        a=n%10;
        sum+=a;
        product*=a;
        n/=10;

    }
    if(default%sum==0||default%product==0)
    {
        printf("hit");

    }else{
        printf("miss");
    }

}