#include<stdio.h>
int main()
{
    int i,n,arr[100],s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i+=2)
    {
        s+=arr[i];
    }
    printf("%d",s);
}