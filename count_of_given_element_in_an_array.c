#include<stdio.h>
int main()
{
    int n,arr[100],x,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(x==arr[i])
        {
            c++;
        }
    }
    printf("%d",c);
}