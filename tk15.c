#include <stdio.h>
int n,s=1,i=1,r=1;
int main()
{
    scanf("%d",&n);
    while(i<n)
    {
        r=r*i++;
        s=s+r;
    }
    printf("%d",s);
}
