#include<stdio.h>
int main()
{
    int n,r1,r2,q1,q2,s;
    scanf("%d",&n);
    r1=n%10;
    q1=n/10;
    r2=r1%5;
    q2=r1/5;
    if(n%5==0)
    {
        s=q1+q2;
        printf("%d",s);
    }
    else
    {
        printf("-1");
    }
}