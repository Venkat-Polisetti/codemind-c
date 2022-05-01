#include<stdio.h>
int main()
{
    int n,temp,d,sum=0;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        d=n%10;
        sum+=d;
        n=n/10;
    }
    if(temp%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}