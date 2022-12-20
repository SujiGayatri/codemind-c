#include<stdio.h>
int main()
{
    int n,i,min=1000;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(min>=a[i])
        {
            min=a[i];
        }
    }
    printf("%d",min);
}