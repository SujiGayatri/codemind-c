#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s;
    float x;
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    x=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%0.2f",x);
}