#include <stdio.h>
int n,a=-1,b=1,c;
int main()
{
    scanf("%d",&n);
    while(n--)
    {
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }
}
