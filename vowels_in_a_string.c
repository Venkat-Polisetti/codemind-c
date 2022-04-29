#include<stdio.h>
int main()
{
    int i,x=0;
    char str[100],c;
    scanf("%[^
]s",str);
    scanf(" %c",&c);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==c)
        {
            printf("True
");
            printf("%d",i);
            x++;
            break;
        }
    }
    if(x==0)
     {
         printf("False");
     }
}