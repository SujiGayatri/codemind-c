#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        int j=0,s=0;
        while(j<n)
        {
            if(arr[i]==arr[j]&&i!=j)
            {
                s++;
            }
            j++;
        }
        if(s==0)
        {
            printf("%d ",arr[i]);
        }
    }
}