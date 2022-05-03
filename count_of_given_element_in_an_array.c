#include<stdio.h>
int main()
{
    int n,i,arr[100],z,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&z);
    for(i=0;i<n;i++)
    {
        if(z==arr[i])
        {
            c++;
        }
    }
    printf("%d",c);
}