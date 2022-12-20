#include<stdio.h>
int main()
{
    float n,c,b,s,t;
    scanf("%f",&n);
    if(n<=199)
    {
        c=1.20;
    }
    else if(n>=200&&n<400)
    {
        c=1.50;
    }
    else if(n>=400&&n<600)
    {
        c=1.80;
    }
    else if(n>=600)
    {
        c=2.00;
    }
    b=n*c;
    if(b>400)
    {
        s=b*0.15;
    }
    else 
    {
        s=100;
    }
    t=b+s;
    printf("%0.2f",t);
}