#include<stdio.h>
int main()
{
    int c,t,i,j,vy=0;
    scanf("%d%d",&c,&t);
    for(i=c;i<=t;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                vy++;
            }
        }
        if(vy==2)
        {
            printf("%d
",i);
        }
        vy=0;
    }
}