#include<stdio.h>
int main()
{
    int n,r,q,m;
    scanf("%d",&n);
    r=n%4;
    q=n/4;
    m=q+1;
    if(r==0)
    {
        printf("%d",q);
    }
    else
    {
        printf("%d",m);
    }
}