#include <stdio.h>
int n,fail,B,A,D;
int main()
{
    scanf("%d",&n);
    switch((n-1)/10)
    {
        default:printf("invalid");
        break;
    case 0:
    case 1:
    case 2:
    case 3:
    {
        printf("D");
        break;
    }
    case 4:
    case 5:printf("A");break;
    case 6:
    case 7:printf("B");break;
    case 8:
    case 9:printf("Fail");break;
    }
    
}



