#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,arr[100],s=0,a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    a=n;
    for(i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            s=s+pow(2,a-1);
        }
        a--;
    }
    printf("%d",s);
}