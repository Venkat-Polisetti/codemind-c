#include<stdio.h>
int main()
{
    int i,n,arr[100];
    float sum=0,avg=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    avg=sum/n;
    printf("%0.2f",avg);
}