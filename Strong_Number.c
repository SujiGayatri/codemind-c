#include<stdio.h>
int main()
{
    int n,t,rem,sum=0,i,j,f;
    scanf("%d",&n);
    t=n;
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    while(n)
    {
       j=1,f=1;
       rem=n%10;
       while(j<=rem)
       {
           f=f*j;
           j++;
       }
       sum=sum+f;
       n=n/10;
    }
    if(sum==t)
    {
        printf("The number %d is a strong number",t);
    }
    else
    {
        printf("The number %d is not a strong number",t);
    }
}