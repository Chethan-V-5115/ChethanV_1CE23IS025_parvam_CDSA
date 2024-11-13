#include<stdio.h>

int main()
{
    int f0=0,f1=1,f2=0,f3=0,n=0;
    scanf("%i",&n);
    for(int i=2;i<=n;i++)
    {
        f3=f2+f1+f0;
        f0=f1;
        f1=f2;
        f2=f3;
    }
    printf("%d",f3);
    return 0;
}
