#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d, ans;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a>b)&&(a>c)&&(a>d)
    {
        ans=a;
    }
    else if(b>a)&&(b>c)&&(b>d)
    {
        ans=b;
    }
    else if(c>a)&&(c>b)&&(c>d)
    {
        ans=c;
    }
    else 
    {
        ans=d;
    }
    printf("%d", ans);
    
    return 0;
}