#include <stdio.h>
int s=0,n,r,a,f=1,t;
int main()
{
   scanf("%d%d",&n,&r);
   t=n;
   while(n)
   {
      a=n%10;
      if(a!=r)
        s=s*10+a;
      else
        f=0;
      n=n/10;
    }
    printf("%d",f?t:s);
}




