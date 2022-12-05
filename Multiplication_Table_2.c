#include<stdio.h>
int main()
{
    int a,b,i,mul;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
    mul=i*a;
    printf("%d x %d = %d
",a,i,mul);
    }
}