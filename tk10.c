#include <stdio.h>
#include<math.h>
int i,n,a,s,f,t;
int main()
{
    for(n=2;n<=100;n++)
    {
        f=1;
        if(n%2||n==2)
        {
            a=sqrt(n);
            for(i=3;i<=n/2;i=i+2)
            if(n%i==0)
            {
                f=0;
                break;
            }
        }
            else
            {
                f=0;
            }
                s=0;
                if(f)
                {
                    t=n;
                    while(n)
                    {
                        s=s*10+n%10;
                        n=n/10;
                    }
                    printf("%d ",s);
                    n=t;
                }
                
            
            
    }
}


