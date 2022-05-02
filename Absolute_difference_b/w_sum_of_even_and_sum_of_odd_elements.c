#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,arr[100],se=0,so=0,diff=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=n;i++)
    {
        if(arr[i]%2==0)
        {
            se+=arr[i];
        }
        else
        {
            so+=arr[i];
        }
    }
     diff=abs(so-se);
    printf("%d",diff);
}