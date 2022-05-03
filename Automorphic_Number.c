#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,temp=0,c=0,a,sqrt=0,e,k=0;
    scanf("%d",&n);
    temp=n;
    sqrt=n*n;
    while(n)
    {
        d=n%10;
        c++;
        n=n/10;
    }
    while(sqrt)
    {
        a=pow(10,c);
        e=sqrt%a;
        if(e==temp)
        {
           printf("Automorphic Number");
           k++;
           break;
        }
        sqrt=sqrt/10;
    }
    if(k==0)
        {
            printf("Not an Automorphic Number");
        }
}