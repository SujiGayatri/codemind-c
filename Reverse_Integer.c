#include<stdio.h>
int main()
{
    int n,m,rev=0,rem;
    scanf("%d%d",&n,&m);
    while(n)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("%d",rev);
}