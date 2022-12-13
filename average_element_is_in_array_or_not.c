#include<stdio.h>
int main()
{
    int n,i,f=0;
    int sum=0,avg;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
    if(avg==a[i])
    {
        f=1;
        break;
    }
    }
    if(f==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}