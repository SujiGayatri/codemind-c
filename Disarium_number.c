#include<stdio.h>
#include<math.h>
int main()
{
    int n,s=0,m,q,r,n1;
    scanf("%d",&n);
    m=log10(n)+1;
    q=n;
    while(q!=0)
    {
        r=q%10;
        n1=pow(r,m);
        s=s+n1;
        m--;
        q=q/10;
    }
    if(s==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}