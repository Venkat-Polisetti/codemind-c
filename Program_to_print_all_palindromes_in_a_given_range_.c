#include<stdio.h>
int main()
{
    int m,n,i,rev=0,temp=0,d;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        temp=i;
        rev=0;
        while(temp)
        {
            d=temp%10;
            rev=rev*10+d;
            temp=temp/10;
        }
        if(i==rev)
        {
            printf("%d ",rev);
        }
    }
}