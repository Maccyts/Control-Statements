#include <stdio.h>
int n,a,b,c,d;
int main()
{
    scanf("%d",&n);
    if(((n*n)/100+(n*n)%100)==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
