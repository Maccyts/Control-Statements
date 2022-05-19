#include <stdio.h>
int n,a;
int main()
{
    scanf("%d",&n);
    if(n>=2000)
    {
        a=n/2000;
        printf("2000*%d=%d\n",a,a*2000);
        n=n%2000;
    }
     if(n>=500)
    {
        a=n/500;
        printf("500*%d=%d\n",a,a*500);
        n=n%500;
    }
     if(n>=200)
    {
        a=n/200;
        printf("200*%d=%d\n",a,a*200);
        n=n%200;
    }
     if(n>=100)
    {
        a=n/100;
        printf("100*%d=%d\n",a,a*100);
        n=n%100;
    }
    if(n!=0)
    {
    printf("others=%d",n);
    }
    
}



