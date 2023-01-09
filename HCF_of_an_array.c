#include<stdio.h>
int main()
{
    int n,i,h,j=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    h=a[0];
    while(j<n)
    {
        if(a[j]%h==0)
        {
            j++;
        }
        else
        {
            h=a[j]%h;
            i++;
        }
    }
    printf("%d",h);
}