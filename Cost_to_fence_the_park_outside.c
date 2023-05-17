#include<stdio.h>
int main()
{
    int l,b,w,c,x,y,z,a;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    x=l*b;
    y=l+(2*w);
    z=b+(2*w);
    a=(y*z-x)*c;
    printf("%d",a);
}