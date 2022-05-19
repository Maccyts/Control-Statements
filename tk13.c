#include <stdio.h>
int n,t,l,a,i=0,s;
int main()
{
    
    scanf("%d",&n);
    t=n;
    for(l=0;n;n=n/10,l++);
    n=t;
    s=0;
    while(n)
    {
        i++;
        a=n%10;
        if((l%2&&i%2)||(l%2==0&&i%2==0))
            s=s+a;
        n=n/10;
    }
        printf("%d",s);
}

