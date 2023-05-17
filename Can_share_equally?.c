#include<stdio.h>
int main()
{
    int a,b,r=0;
    scanf("%d%d",&a,&b);
    r=a-2*b;
    if (a==0 && b%2==0)
    {
    printf("YES");
    }
    else if (a==0 && b%2!=0)
    {
    printf("NO");
    }
    else if (r%2==0)
    {
    printf("YES");
    }
    else
    {
    printf("NO");
    }
}