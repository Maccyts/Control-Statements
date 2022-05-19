#include <stdio.h>
int n,s=0,a;
int main()
{
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&a);
        if(a%10==6)
        s=s+a;
    }
    printf("%d",s);
}
