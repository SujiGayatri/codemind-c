#include<stdio.h>
int main()
{
    float n,m,k,r;
    scanf("%f%f%f",&n,&m,&k);
    r=n/k;
    if(r<=m)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}