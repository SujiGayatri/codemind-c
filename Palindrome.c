#include<stdio.h>
int main()
{
    int n,rev=0,rem,t;
    scanf("%d",&n);
    t=n;
    while(n)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
        if(t==rev)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
}