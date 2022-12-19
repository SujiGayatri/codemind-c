#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,s,r=0,i=0;
    scanf("%d",&n);
    t=n;
    s=n*n;
    while(n)
    {
        r=r+((s%10)*pow(10,i));
        s=s/10;
        n=n/10;
        i++;
    }
    if(t==r)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}