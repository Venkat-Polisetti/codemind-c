#include<stdio.h>
int main()
{
    int n,i,arr[100],sum=0,s=0,diff=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=n;i+=2)
    {
        sum+=arr[i];
    }
    for(i=1;i<n;i+=2)
    {
        s+=arr[i];
    }
    diff=(sum-s);
    printf("%d",diff);
}