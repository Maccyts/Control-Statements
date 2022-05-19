#include <stdio.h>
int n,i=1,s=0,a;
int main()
{
    scanf("%d",&n);
    start:
    if(i<=n)
    {
        scanf("%d",&a);
        if(a%10==6)
        s=s+a;
        i++;
        goto start;
    }
    printf("%d",s);
}



