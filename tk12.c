#include <stdio.h>
int n;
float t=0;
int main()
{
    scanf("%d",&n);
    float s=n/2;
    while(s!=t)
    {
        t=s;
        s=(n/t+t)/2;
    }
    if(s*s==n)
        printf("%d",(int)s);
    else
        printf("%.3f",s);
}
