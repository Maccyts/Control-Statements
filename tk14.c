#include <stdio.h>
int n,a,f=1,s=9;
int main()
{
    scanf("%d",&n);
    while(n)
    {
        a=n%10;
        if(s>=a)
        s=a;
        else
        {
        f=0;
        break;
        }
        n=n/10;
    }
        if(f)
        printf("Progressive");
        else 
        printf(" Not Progressive");
        
}



