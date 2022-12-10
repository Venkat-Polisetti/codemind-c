#include<stdio.h>
void moveAllZeroesAtArrayEnd(int arr[], int n)
{
    int endOfNonZero = 0,i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[endOfNonZero++] = arr[i];
        }
    }
    for (i = endOfNonZero; i < n; i++)
    {
        arr[i] = 0;
    }
}
int main()
{
    int n,arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    moveAllZeroesAtArrayEnd(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}