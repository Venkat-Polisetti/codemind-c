#include<stdio.h>
int main()
{
    int n,i,arr[100],se,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&se);
    for(i=0;i<n;i++)
    {
        if(se==arr[i])
        {
            c++;
            break;
        }
    }
    if(c==1)
    {
      printf("True");
    }
    else
    {
        printf("False");
    }
}