#include<stdio.h>
int main()
{
    int s,t,b,i;
    scanf("%d%d%d",&s,&t,&b);
    i=(2*s*t*b*512)/1024;
    printf("%d KB",i);
}