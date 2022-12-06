#include<stdio.h>
int main()
{
    int n,i,s=0,x=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    s=s+i*i;
    x=x+i;
    }
    x=x*x;
    {
        if(s>x)
        {
            n=s-x;
            printf("%d",n);
        }
        else if(s<x)
        {
            n=x-s;
            printf("%d",n);
        }
    }
}