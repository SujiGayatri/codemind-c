#include<stdio.h>
int main()
{
  int n,m,c,s,d,t,i;
  scanf("%d%d",&n,&m);
  for(i=n;i<=m;i++)
  {
      c=0,s=0;
    t=i;
    while(t)
    {
        d=t%10;
        t=t/10;
        s+=1;
        if (d==0)
        {
            break;
        }
        else
        {
            if (i%d==0)
            {
                c+=1;
            }
        }
    }
    if (s==c)
    {
        printf("%d ",i);
    }
  }
}