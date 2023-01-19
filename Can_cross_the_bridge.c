#include<stdio.h>
int main()
{
    int x,y,z,i;
    scanf("%d%d%d",&x,&y,&z);
    i=(z-y)/x;
    x<=y<=z;
    printf("%d",i);
}