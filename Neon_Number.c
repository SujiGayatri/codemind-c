#include<stdio.h>
int main()
{
    int a,s,r,sum=0;
    scanf("%d",&a);
    s=a*a;
    while(s!=0)
    {
        r=s%10;
        sum+=r;
        s=s/10;
    }
    if(sum==a)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}