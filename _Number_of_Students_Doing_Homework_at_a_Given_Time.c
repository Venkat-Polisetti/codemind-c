#include<stdio.h>
int main()
{
    int m,n,a[100],b[100],c,d=0;
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    scanf("%d",&c);
    for(int i=0;i<m;i++)
    {
        if(a[i]<=c && c<=b[i])
        {
            d+=1;
        }
    }
    printf("%d",d);
}
